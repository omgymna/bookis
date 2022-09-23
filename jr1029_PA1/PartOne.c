// part one of programmin assignment
//Jimena Romo Cuevas CSCE 2610
#include <stdio.h>

int main()
{
    int a,n,y,i,x;
    y = 0;

    printf("Enter a value for a: ");
    scanf("%d",&a); //scanning a from user

    for(n=1;n<=a;n++)
    {
        x =1 ; //this is for future n^n

        for(i=1;i<=n;i++)
        {
            p = n*p; //n^n without power function
        }

        y = y+x+a;  //summing and storing result inside of y
    }

    printf("\ny = %d\n",y) //printing y

    return 0;
}