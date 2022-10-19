#include <stdio.h>
#include "../cs50.h"
#include <string.h>
#include <ctype.h>




int main(void){
    // Get two user inputs(Strings)
    char *s = get_string("First: ");
    char *t = get_string("Second: ");


    if (strcmp(s,t) == 0)
    {
        // If they match
        printf("Same\n");
        return 0;
    }
    else
    {
        // Not alike
        printf("Different\n");
        return 1;
    }


}