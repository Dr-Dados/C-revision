#include "main.h"

int factorial(int n)
{
    int facto;
    if(n < 0){
        return -1;
    }
    else if (n <= 1)
    {
        return 1;
    }else 
    {
        facto = n * factorial(n-1);
    }
    return (facto);
}
