//Jimena Romo Cuevas -CSCE 2610 UNT
#include <stdio.h>


//main
int main()
{
    int a,b;

    printf("Enter a value for a: ");
    scanf("%d",&a); //scanning for a
    printf("\nEnter a value for b: ");
    scanf("%d",&b); //scanning into b;

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