#include <stdio.h>
#include "../cs50.h"

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    if (n <= 0)
    {
        return;
    }
    draw(n - 1);
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < x + 1; y++)
        {
            printf("#");
        }
        printf("\n");
        
    }
    
    
}