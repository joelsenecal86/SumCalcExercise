// SumCalcExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double sum(double a, double b) 
{
    return a + b;
}


int main()
{
    double a;
    double b;

    std::cout << "Enter First Number: ";
    std::cin >> a;
    std::cout << "The First Number is: " << a << std::endl;

    std::cout << "Enter Second Number: ";
    std::cin >> b;
    std::cout << "The Second Number is: " << b << std::endl;

    std::cout << "The sum of " << a << " and " << b << " is: " <<  sum(a, b) << std::endl;
}
