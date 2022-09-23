//Jimena Romo Cuevas -CSCE 2610 UNT
#include <stdio.h>


//main
int main()
{
    int a,b,y;
    y = 0;

    printf("Enter a value for a: ");
    scanf("%d",&a); //scanning for a
    printf("\nEnter a value for b: ");
    scanf("%d",&b); //scanning into b;

    //calculating value of y
    for(int i =0; i<= a; i++)
    {
        y += ((factorial(n*2)) + b);
    }


    return 0;
}

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