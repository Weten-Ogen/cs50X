#include "../cs50.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    // The array 
    string strings[] = {"Marcus", "Hermione", "Ron", "Harry"};

    // The target value
    string s = get_string("The str you want is? ");

    // Outer loop
    for (int i = 0;i < 4;i++){
        // If the number is the array
        if (strcmp(strings[i], s) == 0)
        {
            // Say this
            printf("Found\n");
            // Stop
            return 0;
        }
    }
    // After the loop and still found
    // Nothing
    printf("Not Found\n");
    //Stop
    return 1;
}

