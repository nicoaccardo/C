#include <stdio.h>
#include <math.h>

void crescente (int array[], int size) {

    int output;
    for (size_t i = 1; i < size; i++)
    {
        if (array[i-1]<=array[i])
        {
            output = 1;
        } else
        {
            output = 0;
            break;
        }
    }

    printf("%d\n", output); 
}