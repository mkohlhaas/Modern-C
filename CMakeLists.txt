cmake_minimum_required(VERSION 3.27)

project(ModernC LANGUAGES C)

add_executable(getting-started getting-started.c)
set_target_properties(getting-started PROPERTIES C_STANDARD 23 C_STANDARD_REQUIRED ON)
