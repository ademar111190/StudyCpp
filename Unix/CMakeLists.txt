cmake_minimum_required(VERSION 3.10.0)
project (main)
set (CMAKE_CXX_STANDARD 11)

include_directories(
  ../Core/sqlite

  ../Core/interactor
  ../Core/model
  ../Core/repository
  ../Core/repository/datasource
)

add_executable (main
  main.cpp

  ../Core/sqlite/sqlite3.c

  ../Core/interactor/GetContinentsUseCase.cpp
  ../Core/repository/ContinentRepository.cpp
  ../Core/repository/datasource/ContinentRepositoryLocal.cpp
)

install (TARGETS main DESTINATION bin)
