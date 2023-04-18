#include <iostream>
#include "ManhattanSolver.h"
#include "EuclideanSolver.h"

int main() {
    short arr[16] = {1,2,8,3,9,0,10,4,7,5,6,11,13,14,15,12};
    auto* state = new PuzzleState(arr);
    ManhattanSolver manhattanSolver;
    manhattanSolver.solve(state);
    EuclideanSolver euclideanSolver;
    euclideanSolver.solve(state);
    return 0;
}