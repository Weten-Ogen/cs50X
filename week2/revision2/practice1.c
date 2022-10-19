#include <stdio.h>
#include "../cs50.h"


int main(void)
{
    int i = 10;
    int count = 0;
    // print rows
    do
    {
        printf("#");
        i--;
        count++;
        // If 3 bricks added to row
        if (count == 3)
        {
            // Jump to the next column
            printf("\n");
            count  = 0;
        }
    }
    while (i > 1);
}