#include "formatter_ex.h"
#include "solver.h"

#include <iostream>

int main()
{
    const double x = solve(2.0, 4.0, 10.0);
    std::cout << formatter_ex("x = " + std::to_string(x)) << std::endl;
    return 0;
}
