cmake_minimum_required(VERSION 3.3)
project(project2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp base_classes/personType.cpp base_classes/personType.h base_classes/dateType.cpp base_classes/dateType.h base_classes/addressType.cpp base_classes/addressType.h extPersonType.cpp extPersonType.h base_classes/phoneNumberType.cpp base_classes/phoneNumberType.h contactManager.cpp contactManager.h extPersonList.cpp extPersonList.h searchAndSort.cpp searchAndSort.h)
add_executable(project2 ${SOURCE_FILES})