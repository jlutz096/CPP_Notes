/**
 * @file value_return.cpp
 * @brief Value returning function
 * @version 0.1
 * @date 2023-08-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

// function prototype
double larger(double x, double y);
double compareThree(double x, double y, double z);


int main()
{
    // var def
    double one, two;

    std::cout << "The larger of 5 and 10 is: " << larger(5, 10) << std::endl;

    std::cout << "Enter two numbers: " << std::endl;

    std::cin >> one >> two;
    std::cout << std::endl;

    std::cout << "The larger of " << one << " and " << two << " is " << larger(one, two);

    std::cout << "The largest of 43.48, 34 and 12.65 is: " << compareThree(43.48, 34, 12.65);

    return 0;
}
double larger(double x, double y)
{
    double max;

    if(x >= y)
        max = x;
    else
        max = y;

    return max;
}

double compareThree(double x, double y, double z)
{
    return larger(x, larger(y, z));
}
