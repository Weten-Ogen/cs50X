#include <stdio.h>
#include "../cs50.h"

int main(void)
{
    float x = get_float("What's x? ");
    float y = get_float("What's x? ");

    printf("%.20f\n" , x / y);
}