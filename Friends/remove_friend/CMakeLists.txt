cmake_minimum_required(VERSION 3.30)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_C_STANDARD 17)
set(source_file "remove_friend.c") 

add_library(remove_friend STATIC ${source_file})

target_include_directories(remove_friend INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
# Ham de tam thoi disable doan code ma khong can xoa
# if(0)...endif()

# Cac tu khoa quan ly pham vi (scope) cua dependency va header include path giua cac target (executable, library,..)
# INTERFACE: Khong link voi target hien tai, chi truyen cho cac target khac dung 
# PUBLIC: Link voi target hien tai, co truyen duoc cho cac target khac khi link voi no
# PRIVATE: Chi link voi target hien tai, khong truyen cho cac target khac.
# Vi du: 
if(0)
target_include_directories(remove_firend
  PRIVATE my_lib1
  PUBLIC my_lib2
  INTERFACE my_lib3)
endif()