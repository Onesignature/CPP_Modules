#include <iostream>
#include "Array.hpp"
#include <stdlib.h>

#define MAX_VAL 750
int main(void)
{
    std::cout << "--------------------------------------" << std::endl;
    std::cout << "Character Array test using Array class" << std::endl;
    std::cout << "--------------------------------------" << std::endl;
    Array<char> chartest(26);
    for (unsigned int i = 0; i < chartest.size(); i++)
    {
        chartest[i] = 'A' + i;
    }

    //No Exceptions expected
    try
    {
        for (unsigned int i = 0; i < chartest.size(); i++)
        {
            std::cout << chartest[i];
        }
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "Character Array test using out of bound index" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    //Expecting exception
    try
    {
        for (unsigned int i = 0; i < chartest.size() + 1; i++)
        {
            std::cout << chartest[i];
        }
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    Array<int> numbers(5);
    numbers[0] = 56;
    numbers[1] = 59;
    numbers[2] = 69;
    numbers[3] = 42;
    numbers[4] = 499;

    std::cout << "the size of the numbers is: " << numbers.size() << std::endl;;

    Array<int> copynums(numbers);

    try
    {
        numbers[-1] = 100;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        std::cout << "Numbers[1]: " <<  numbers[1] << std::endl;
        numbers[1] += numbers[2];
        std::cout << "Numbers[1] after: " << numbers[1] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        numbers[1] += numbers[6];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        for (int i = 0; i < 5; i++)
        {
            if (copynums[i] != numbers[i])
                throw std::runtime_error("Numbers are not the same in copied array :)");
        }
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    // Array<int> numbers(MAX_VAL);
    // int* mirror = new int[MAX_VAL];
    // srand(time(NULL));
    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     const int value = rand();
    //     numbers[i] = value;
    //     mirror[i] = value;
    // }
    // //SCOPE
    // {
    //     Array<int> tmp = numbers;
    //     Array<int> test(tmp);
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     if (mirror[i] != numbers[i])
    //     {
    //         std::cerr << "didn't save the same value!!" << std::endl;
    //         return 1;
    //     }
    // }
    // try
    // {
    //     numbers[-2] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // try
    // {
    //     numbers[MAX_VAL] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     numbers[i] = rand();
    // }
    // delete [] mirror;//
    // return 0;
}