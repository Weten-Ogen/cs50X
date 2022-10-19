#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 5;
    int y = 6;

    printf("%i is five, %i is Six \n", x,y);
    swap(&x, &y);
    printf("%i is five, %i is Six \n", x,y);


}

void swap( int *a, int *b)
{
    int tmp =  *a;
    *a = *b;
    *b = tmp;

}