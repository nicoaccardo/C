#include <stdio.h>
#define SIZE 10

int main(void) {

    int array[SIZE] = {0}, n;

    printf("Inserisci valore: ");
    scanf("%d", &n);

    for (size_t i = 0; i < n; i++)
    {
        printf("array[%ld]: ", i);
        scanf("%d", &array[i]);

    }

    int min = array[0], max = array[0], min2 = array[0], max2 = array[0];

    for (size_t i = 0; i < n; i++)
    { 
        if (array[i] > max)
        {
            max = array[i];
        }

        if (array[i] < min)
        {
            min = array[i];
        }

        if (array[i] < max && array[i] >= max2)
        {
            max2 = array[i];
        }

        if (array[i] > min && array[i] <= min2)
        {
            min2 = array[i];
        }       
    }

    printf("max: %d\n", max);
    printf("min: %d\n", min);
    printf("max2: %d\n", max2);
    printf("min2: %d\n", min2);
    

    return 0;
}