cmake_minimum_required(VERSION 3.10.0)
project (main)
set (CMAKE_CXX_STANDARD 14)

include_directories(
  contract
  view

  ../Core/sqlite

  ../Core/contract
  ../Core/interactor
  ../Core/model
  ../Core/presenter
  ../Core/repository
  ../Core/repository/datasource
  ../Core/view
)

add_executable (main
  main.cpp
  contract/LogContract.cpp
  contract/PathContract.cpp
  view/UnixContinentsView.cpp

  ../Core/sqlite/sqlite3.c

  ../Core/interactor/GetContinentsUseCase.cpp
  ../Core/presenter/ContinentsPresenter.cpp
  ../Core/repository/ContinentRepository.cpp
  ../Core/repository/datasource/ContinentRepositoryLocal.cpp
)

install (TARGETS main DESTINATION bin)
