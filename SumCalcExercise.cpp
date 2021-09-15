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
    bool loop = true;

    do
    {
        if (std::cin.fail() == 0)
        {

            std::cout << "Enter Input A: ";
            if (std::cin >> a)
            {
                std::cout << "A CAPTURED" << std::endl;                
            }

            std::cout << "Enter Input B: ";
            if (std::cin >> b)
            {
                std::cout << "B CAPTURED" << std::endl;
                loop = false;
            }
            else
            {
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                std::cout << "Please Enter Valid Input..." << std::endl;              
            }
        }
        else
        {
            std::cin.clear();
            std::cout << "LOWER" << std::endl;
        }

        
    } while (loop == true);
    
    std::cout << "The sum of " << a << " and " << b << " is: " <<  sum(a, b) << std::endl;
}
