#!/bin/bash
mkdir -p build
cd build
cmake ..
make

echo "Done, execute with ./build/main"
