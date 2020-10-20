#include <iostream>
#include "calculator.h"

int main()
{
    Calculator calculator;

    double a = 1.2;
    double b = 3.6;

    std::cout << "a + b = " << calculator.Add(a, b) << std::endl;
    std::cout << "a - b = " << calculator.Sub(a, b) << std::endl;

    return 0;
}
