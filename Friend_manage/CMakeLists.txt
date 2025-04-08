cmake_minimum_required(VERSION 3.30)
project(Friend_manage)

set(CMAKE_C_STANDARD 17)

#Tao ra file binary ten la main_app trong build
add_executable(${PROJECT_NAME} "main/main.c")  

#Tao thu vien tu friend.c
add_library(friend STATIC "source/friend.c") 

#Bao gom thu muc chua file header
target_include_directories(friend PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/) 

#Lien ket voi thu vien friend vaoo chuong trinh chinh
target_link_libraries(${PROJECT_NAME} PRIVATE friend) 