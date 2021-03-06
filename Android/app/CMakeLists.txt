cmake_minimum_required(VERSION 3.4.1)
set (CMAKE_CXX_STANDARD 14)

include_directories(
  src/main/cpp
  src/main/cpp/contract
  src/main/cpp/view

  ../../Core/sqlite

  ../../Core/contract
  ../../Core/interactor
  ../../Core/model
  ../../Core/presenter
  ../../Core/repository
  ../../Core/repository/datasource
  ../../Core/view
)

add_library(
  pathManager
  SHARED

  src/main/cpp/pathManager.cpp
)

add_library(
  continents
  SHARED

  src/main/cpp/continents.cpp
  src/main/cpp/contract/LogContract.cpp
  src/main/cpp/contract/PathContract.cpp
  src/main/cpp/view/AndroidContinentsView.cpp

  ../../Core/sqlite/sqlite3.c

  ../../Core/interactor/GetContinentsUseCase.cpp
  ../../Core/presenter/ContinentsPresenter.cpp
  ../../Core/repository/ContinentRepository.cpp
  ../../Core/repository/datasource/ContinentRepositoryLocal.cpp
)

find_library(
  log-lib
  log
)

target_link_libraries(
   pathManager
   ${log-lib}
)

target_link_libraries(
   continents
   pathManager
   ${log-lib}
)
