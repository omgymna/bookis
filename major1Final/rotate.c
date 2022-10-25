
#include <stdio.h>
#define TOTAL_BITS 32


unsigned int Rotate(unsigned int num, unsigned int k){
    unsigned int res;
    k = k % TOTAL_BITS;
    res = (num << k ) | (num >> (TOTAL_BITS - k));
    return res;
}

