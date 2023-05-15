#include <stdio.h>
#define SIZE 5

int main(void) {

    //*a) 
    unsigned int values[SIZE]={2,4,6,8,10};

    //*b)
    unsigned int *vPtr;

    //*c)
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%u\n", values[i]);
    }
    
    //*d)
    

    return 0;
}