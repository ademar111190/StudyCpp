cmake_minimum_required(VERSION 3.10.0)
project (main)

include_directories(
  ../Core/model
  ../Core/sqlite
)

add_executable (main
  main.cpp
  ../Core/sqlite/sqlite3.c
)

install (TARGETS main DESTINATION bin)
