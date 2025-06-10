# Tao thu vien AverageScore tu file.c 
add_library(average_score "AverageScore.c")

# Bao gom ca thu muc header AverageScore.h trong folder
# dung cho <average_score> va nhung file link voi <average_score>
target_include_directories(average_score PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../Include)