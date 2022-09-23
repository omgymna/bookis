//Jimena Romo Cuevas -CSCE 2610 UNT
#include <stdio.h>

//creating a function for factorials
int factorial(int n)
{
    int z = 1;
    for(int i = 1; i <= n; i ++)
    {
        z = z * i;
    }
    return z;
}