#include <stdio.h>


int main(void)
{
    // Making columns
    for (int i = 0; i < 8; i++)
    {
        // Making rows
        for (int j = 0; j < i; j++)
        {
            printf(" # ");
        }
        // Jump to the next column after
        // Each adding 3 bricks in a row
        printf("\n");

    }
}
