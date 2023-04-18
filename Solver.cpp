//
// Created by kpiec on 18.04.2023.
//

#include "Solver.h"

bool Solver::isVisited(PuzzleState* state) {

    for (auto i : visited) {
        if (*i == *state)
            return true;
    }
    return false;
}

void Solver::addToVisited(PuzzleState* state) {
    visited.push_back(state);
}
