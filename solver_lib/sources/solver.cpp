#include "solver.h"

#include <stdexcept>

double solve(double a, double b, double c)
{
    if (a == 0.0) {
        throw std::invalid_argument("a must not be zero");
    }
    return (c - b) / a;
}
