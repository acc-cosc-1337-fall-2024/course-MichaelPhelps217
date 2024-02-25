//add include statements
#include "repetition.h"

//add function(s) code here

int factorial(int fac_num)
{
    int start = 1;
    int product = 1;

    while(start <= fac_num)
    {
        product =  product * start;
        start++;
    }

    return product;
}

int gcd(int num1, int num2)
{
    while (num1 != num2)
    {
        if(num1 < num2)
        {
            num1 = num1 + num2;
            num2 = num1 - num2;
            num1 = num1 - num2;
        }

        else if(num1 > num2)
        {
            num1 = num1 - num2;
        }
    }

    return num1;
}