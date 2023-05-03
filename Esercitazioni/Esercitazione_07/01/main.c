#include <stdio.h>
#define SIZE 100

int main() {

    int n;
    int array[SIZE] = {0};

    printf("inserisci valore: ");
    scanf("%d", &n);

    for (size_t i = 0; i < n; i++)
    {
        printf("valore[%ld]: ", i);
        scanf("%d", &array[i]);
    }

    printf("\n");

    for (size_t j = n; j > 0; j--)
    {
        printf("valore[%ld]: %d\n", j-1, array[j-1]);
    }
    
    
    return 0;
}