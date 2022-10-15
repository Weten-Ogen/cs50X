#include <stdio.h>
#include "cs50.h"

int main(void)
{
    // Get users input 
    char c = get_char("Do you agree? ");

    if (c == 'y')
    {
        printf("Well Done!!\n");
    }
    else
    {
        printf("Okkkkkk !!!\n");
    }
}