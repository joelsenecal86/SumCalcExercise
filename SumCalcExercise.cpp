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

    do    
    {        
        std::cout << "Enter Integer A: ";
        std::cin >> a;

        std::cout << "Enter Ingeter B: ";
        std::cin >> b;

        if (!std::cin)
        {
            std::cout << "Invalid Input!" << std::endl;
            std::cin.clear();
            std::cin.ignore(100, '\n');
        }
        else
        {
            break;
        }
    }while (std::cin.bad() == false);
    
    std::cout << "The sum of " << a << " and " << b << " is: " <<  sum(a, b) << std::endl;
}