cmake_minimum_required(VERSION 3.30)
project(fmt_test)

set(CMAKE_CXX_STANDARD 17)

add_executable(fmt_test fmt_test.cpp)

# Tim package thu vien fmt
find_package(fmt REQUIRED)
# Link thu vien vao target
target_link_libraries(${PROJECT_NAME} PRIVATE fmt::fmt)

# Include header path 
include_directories(../Friend_manage/remove_friend)
# Link voi thu vien remove_friend
add_library(remove_friend STATIC IMPORTED)
set_target_properties(remove_friend PROPERTIES IMPORTED_LOCATION
  "${CMAKE_CURRENT_SOURCE_DIR}/../Friend_manage/remove_friend/build/libremove_friend.a")

# Link vao target
target_link_libraries(${PROJECT_NAME} PRIVATE remove_friend)