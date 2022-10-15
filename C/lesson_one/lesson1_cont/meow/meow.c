#include <stdio.h>
#include "../cs50.h"

int main(void)

{
    string txt = get_string("Input the sound? ");

    for (int x = 0; x < 3 ; x++)
    {
        printf("%s\n", txt);
    }
}