cmake_minimum_required(VERSION 3.22)
project(katecpo_db)

set(CMAKE_CXX_STANDARD 23)

add_executable(katecpo_db main.cpp engine/b-tree/BTree.cpp engine/b-tree/BTree.h engine/b-tree/BTreeModels.h)
