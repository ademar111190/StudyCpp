cmake_minimum_required(VERSION 3.10.0)
project (main)
set (CMAKE_CXX_STANDARD 11)

include_directories(
  view

  ../Core/sqlite

  ../Core/interactor
  ../Core/model
  ../Core/presenter
  ../Core/repository
  ../Core/repository/datasource
  ../Core/view
)

add_executable (main
  main.cpp
  view/UnixContinentsView.cpp

  ../Core/sqlite/sqlite3.c

  ../Core/interactor/GetContinentsUseCase.cpp
  ../Core/presenter/ContinentsPresenter.cpp
  ../Core/repository/ContinentRepository.cpp
  ../Core/repository/datasource/ContinentRepositoryLocal.cpp
)

install (TARGETS main DESTINATION bin)
