#include <stdio.h>

int main() {

    int N, fattoriale = 1;

    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; ++i)
    {
        fattoriale *= i;
    }
    
    printf("%d\n", fattoriale);

    return 0;
}