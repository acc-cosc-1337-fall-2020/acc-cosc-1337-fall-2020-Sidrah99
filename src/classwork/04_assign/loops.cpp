#include "loops.h"

//cpp
int factorial(int num)
{
    int product = 1;
    int counter = 1;

    while (counter <= num)
    {
        product = product * counter;
        counter = counter + 1;
    }

    return product;
}