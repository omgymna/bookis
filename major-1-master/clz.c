//main source by: Jimena R. Cuevas
#include <stdio.h>
#include "major1.h"

int CountLeadZero(unsigned x)
{
    int count = 0;
    int msb; //most sign. bit
    int size = sizeof(int)*8; //32 bit

    msb = 1<<(size - 1);

    for(int i=0; i<size; i++)
    {
        if((x << i) & msb)
        {
            break;
        }
        count++;
    }
    return count;
}
