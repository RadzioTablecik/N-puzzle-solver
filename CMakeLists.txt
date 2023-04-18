cmake_minimum_required(VERSION 3.24)
project(untitled16)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled16 main.cpp EuclideanSolver.cpp EuclideanSolver.h ManhattanSolver.cpp ManhattanSolver.h PuzzleState.cpp PuzzleState.h Solver.cpp Solver.h)
