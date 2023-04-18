//
// Created by kpiec on 18.04.2023.
//

#ifndef UNTITLED16_SOLVER_H
#define UNTITLED16_SOLVER_H


#include <unordered_set>
#include <set>
#include "PuzzleState.h"

class Solver {
protected:
    std::vector<PuzzleState*> visited;
public:
    void addToVisited(PuzzleState* state);
    bool isVisited(PuzzleState* state);
    virtual void solve(PuzzleState* state) = 0;
};

#endif //UNTITLED16_SOLVER_H
