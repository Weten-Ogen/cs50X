#include <stdio.h>


int main()
{
    const int n = 33;
    // The outer loop
    for (int i = 0; i < n; i++)
    {
        // Prints the spaces
        for (int k = n - 1; k > i;k--){
                printf("  ");
            }
        // Prints the blocks in a row
        for(int j = 0; j <= i; j++)
        {
            printf("# ");
        }
        printf("\n");
    }
}