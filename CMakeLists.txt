CMAKE_MINIMUM_REQUIRED(VERSION 2.6) #cmake最低版本需求，不加入此行会受到警告信息

PROJECT(HELLO) #项目名称

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

# find_package(PCL REQUIRED)
# include_directories(${PCL_INCLUDE_DIRS})

add_executable(DisplayImage src/display.cpp) #生成应用程序 DisplayImage
add_executable(helloworld src/helloworld.cpp) #生成应用程序 hello
target_link_libraries(DisplayImage ${OpenCV_LIBS})

# target_link_libraries(DisplayImage ${PCL_LIBS})