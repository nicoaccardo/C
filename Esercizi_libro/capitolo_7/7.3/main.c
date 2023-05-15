#include <stdio.h>
#define SIZE 10

int main(void){

    //a)
    float numbers[SIZE];
    for (size_t i = 0; i < SIZE; i++){
        numbers[i]=(1.1)*i;
    }

    //b)
    float *nPtr;

    //c)
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("Elemento[%ld]: %.1f\n", i, numbers[i]);
    }

    //d)
    nPtr=numbers;
    nPtr=&numbers[0];

    puts("");

    //e)
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("Elemento[%ld]: %.1f\n", i, *(nPtr+i));
    }
    
    puts("");

    //f)
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("Elemento[%ld]: %.1f\n", i, *(numbers+i));
    }

    puts("");

    //g)
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("Elemento[%ld]: %.1f\n", i, nPtr[i]);
    }

    //h)
    numbers[4];
    *(numbers+4);
    nPtr[4];
    *(nPtr+4);

    return 0;
}