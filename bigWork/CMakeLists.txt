#cmake最低版本要求
cmake_minimum_required(VERSION 3.27)

#项目名称
project(opencvtest)

#设置CPP标准
set(CMAKE_CXX_STANDARD 17)

#包含目录
include_directories("D:/programe/SDK/opencv/build/include")
include_directories("D:/programe/SDK/opencv/build/include/opencv2")

#库目录
link_directories("D:/programe/SDK/opencv/build/x64/vc16/lib")

#生成可执行文件
add_executable(opencvtest src/main.cpp
        src/findColor.cpp
        src/colorPicker.cpp
        src/getContours.cpp
)

#链接静态库
target_link_libraries(opencvtest ../lib/opencv_world4100d)