#File CMake chung ca project
cmake_minimum_required(VERSION 3.30)
project(Friend_manage)

# CMAKE_CURRENT_LIST_DIR: duong dan den thu muc chua file CMake(bao gom ca .cmake hoac CMakeLists.txt) dang duoc include hoac xu ly
# CMAKE_CURRENT_SOURCE_DIR: La duong dan den thu muc chua CMakeLists.txt dang duoc xu ly
# CMAKE_SOURCE_DIR: La chi den thu muc goc cua toan bo chuong trinh
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_C_STANDARD 17)
set(source_file "source/friend.c" "source/gay.c")

#Tao ra file binary ten la main_app trong build
add_executable(${PROJECT_NAME} "main/main.c")   

#Tao thu vien tu tat ca cac file source  
add_library(friend_lib STATIC ${source_file}) 
#Neu chi add 1 source file: 
#add_library(friend STATIC "source/friend.c")

# Them sub-directory de Cmake load thu vien tu folder ben ngoai
add_subdirectory(remove_friend)

#Bao gom thu muc chua tat ca cac file header (Phai cung ten voi add_library)
target_include_directories(friend_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include) 
#Neu chi add 1 header file (luu y ten friend phai trung voi ten tren add_library):
#target_include_directories(friend PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

#Lien ket thu vien vao chuong trinh chinh (Phai cung ten voi add_library)
target_link_libraries(${PROJECT_NAME} PRIVATE friend_lib remove_friend) 