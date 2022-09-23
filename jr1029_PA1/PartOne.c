// part one of programmin assignment
//Jimena Romo Cuevas CSCE 2610
#include <stdio.h>

int main()
{
    int a,b,n,y,i,x;
    y = 0;

    printf("Enter a value for a: ");
    scanf("%d",&a); //scanning a from user

    printf("Enter a value for b: ");
    scanf("%d",&b); //scanning b from user

    for(n=1;n<=a;n++)
    {
        x =1 ; //this is for future n^n

        for(i=1;i<=n;i++)
        {
            x = n*x; //n^n without power function
        }

        y = y+x+b;  //summing and storing result inside of y
    }

    printf("\ny = %d\n",y); //printing y

    return 0;
}