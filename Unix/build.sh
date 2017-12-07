#!/bin/bash
mkdir -p cache

if [ -f "cache/sqlite.o" ]
then
  echo "Using cached sqlite3"
else
  echo "Compiling sqlite3"
  gcc -c -o cache/sqlite.o ../Core/sqlite/sqlite3.c
fi

echo "Compiling main"
g++ -c -o cache/main.o main.cpp -I ../Core -I ../Core/sqlite

echo "Building executable"
g++ -o main cache/sqlite.o cache/main.o

echo "Done, execute with ./main"
