#include <stdio.h>

int main() {

    unsigned int N, divisori = 0;

    printf("Inserisci un numero intero positivo: ");
    scanf("%u", &N);

    for (unsigned int i = 1; i <= N; i++){
        if ((N % i) == 0){
            divisori++;
        }
    }

    if (divisori<=2)
    {
        printf("%u è un numero primo\n", N);
    } else
    {
        printf("%u ha %u divisori\n", N, divisori);
    }
    
    return 0;
}