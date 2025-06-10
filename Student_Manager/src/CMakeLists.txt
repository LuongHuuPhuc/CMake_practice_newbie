add_library(student_info STATIC "id_check.c" "student.c")

# include ca thu muc chua file header cua cac file.c nay
target_include_directories(student_info PUBLIC ${CMAKE_SOURCE_DIR}/Include)