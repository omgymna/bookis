//computing and printing value for e^(x^2)
//Jimena Romo Cuevas - CSCE 2610
#include <stdio.h>
int main()
{
    float x;
    int a;

    printf("Enter value of x: ");
    scanf("%f",&x); //scanning floating point variable to x

    printf("Enter value of a: ");
    scanf("%d",&a); //scanning integer variable to a

    float sum = 1.0;
    float t = 1.0;

    //iterating through 1-a
    for(int i =1;i<=a;i++)
    {
        t = (t*x*x)/i; //using taylor series
        sum += t; //add previous value to sum
    }

    printf("Value of e^(x^2) = %f",sum);

    return 0;
}