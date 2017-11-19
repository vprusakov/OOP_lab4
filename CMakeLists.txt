cmake_minimum_required(VERSION 3.8)
project(OOP_lab4)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
	src/main.cpp
	src/PrimeFactors.h
	src/PrimeFactors.cpp
	)

add_executable(OOP_lab4 ${SOURCE_FILES})