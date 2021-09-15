// SumCalcExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double sum(float a, float b) 
{
    return a + b;
}


int main()
{
    float a;
    float b;   

    do    
    {        
        if (std::cin)
        {
            std::cout << "Enter Number A: ";
            std::cin >> a;           
        }
        if (std::cin)
        {
            std::cout << "Enter Number B: ";
            std::cin >> b;
        }

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

    return 0;
}

