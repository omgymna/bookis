#include "major1.h"
//gonna have to add function files when ready
//#include "clz.c"

#include <stdio.h>

int main()
{

    int ch = 0; //menu choice
    long x;

    while(ch != 5)
    {
        //printing menu and getting choice
        printf("Enter the menu option for the operation to perform:\n");
        printf("(1) Count Leading Zeroes\n");
        printf("(2) Endian Swap\n");
        printf("(3) Rotate-right\n");
        printf("(4) Parity\n");
        printf("(5) EXIT\n--> ");
        
        scanf("%d", &ch);

        //switch case based on choice
        switch(ch)
        {
            case 1:
                //loop if not in range
                do
                {
                    printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
                    scanf("%ld", &x);
                }while(x<1|x>4294967295);
                
                printf("The number of leading zeroes in %ld is %d \n",x,CountLeadZero((unsigned)x));
                
                break;
            case 2:
            //add endian
                break;
            case 3:
            //add rotate
                break;
            case 4:
            //add Parity
                break;
            case 5:
                if(ch==5)
                    break;
                break;
            default:
                printf("Error: Invalid option. Please try again. \n");
        }

    }


    return 0;
}
