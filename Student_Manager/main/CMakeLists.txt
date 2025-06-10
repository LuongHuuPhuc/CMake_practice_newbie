# Tao file thuc thi 
add_executable(StudentMain "main.c")

# Them include path cua thu vien, giup trinh bien dich tim thay no
target_include_directories(StudentMain PRIVATE
    ${CMAKE_SOURCE_DIR}/Include
    ${CMAKE_SOURCE_DIR}/AverageScore
)

# Link voi thu vien Student va AverageScore vao file thuc thi cua main.c StudentMain
target_link_libraries(StudentMain PUBLIC student_info average_score)