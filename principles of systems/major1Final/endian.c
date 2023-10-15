#include<stdio.h>

#define B0 0
#define B1 1
#define B2 2
#define B3 3

int SwapEndian(int number) {
    char *num = (char*)(&number);

    /** Swap byte B0 with B4 data by bitwise XOR*/
    num[B0] = num[B0] ^ num[B3];
    num[B3] = num[B0] ^ num[B3];
    num[B0] = num[B0] ^ num[B3];

    /** Swap byte B1 with B2 data by bitwise XOR*/
    num[B1] = num[B1] ^ num[B2];
    num[B2] = num[B1] ^ num[B2];
    num[B1] = num[B1] ^ num[B2];

    /** return new number*/
    return number;
}
