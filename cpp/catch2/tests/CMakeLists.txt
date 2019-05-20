cmake_minimum_required(VERSION 3.0)

add_executable(testrunner testrunner.cpp adder_test.cpp)

add_test(NAME CatchTest COMMAND testrunner -s)
