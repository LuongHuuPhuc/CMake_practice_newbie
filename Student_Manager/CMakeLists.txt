cmake_minimum_required(VERSION 3.30)
project(Student_Manager)

set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_C_STANDARD_REQUIRED YES)
set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 17)

# Tim các file.h toan cuc trong folder /include
# ↓ Cai nay chi nen dung cho cac project nao don gian, de quan ly
# include_directories(Include)

# Them thu vien con, folder nao chua CMakeLists.txt thi them vao day
add_subdirectory(src)
add_subdirectory(main)
add_subdirectory(AverageScore)