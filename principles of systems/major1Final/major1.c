#include "major1.h"
//gonna have to add function files when ready
//#include "clz.c"
//#include "endian.c"

#include <stdio.h>

int main()
{

    int ch = 0; //menu choice
    long x;
    int num; //endian swap var declaration


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
                }while(x<1||x>4294967295);
                
                printf("The number of leading zeroes in %ld is %d \n",x,CountLeadZero((unsigned)x));
                
                break;
            case 2:

                do
                {
                    printf("Enter any 32-bit number (>= 1 and <= 4294967295, inclusively): ");
                    scanf("%d", &num);    
                }while(num<1||num>4294967295);
                
                printf("The endian swap of %d gives %d\n",num,SwapEndian(num)); //output

                break;
            case 3:;
            //add rotate
            int number, bit_positions;
            printf("Enter a 32-bit number (>= 1 and <=4294967295, inclusively: ");
            scanf("%d", &number);
            printf("Enter the number of positions to rotate-right the input (between 0 and 31, inclusively): ");
            scanf("%d", &bit_positions);
            printf("%d rotated by %d position gives: %d\n", number, bit_positions, Rotate(number, bit_positions));
                break;
            case 4:
     		
		do
		{
		    printf("Enter any 32-bit number (>= 1 and <= 4294967295, inclusively): ");
		    scanf("%d", &num);
		}while(num<1||num>4294967295);

		printf("Parity of %d is %d\n", num, (Parity(num)? 1: 0)); //output

                break;
            case 5:
                if(ch==5)
                    break;
                break;
            default:
                printf("Error: Invalid option. Please try again. \n");
        }

    }
    printf("Program terminating. Goodbye...\n"); //last message 

    return 0;
}
