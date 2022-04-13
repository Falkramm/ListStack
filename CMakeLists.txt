cmake_minimum_required(VERSION 3.20)
project(ListStack)

set(CMAKE_CXX_STANDARD 14)

add_executable(ListStack main.cpp AbstractContainer.cpp AbstractContainer.h AbstractStack.cpp AbstractStack.h ListStack.cpp ListStack.h ListStackIterator.cpp ListStackIterator.h AbstractStackIterator.cpp AbstractStackIterator.h TESTS.h)
