#include <stdio.h>

int main() {

    unsigned int N, n1, n2, n3, n4, n5, resto;

    printf("Inserisci un numero a cinque cifre: ");
    scanf("%u", &N);

    // esempio: 12321
    n1 = N / 10000; //n1=1
    resto = N % 10000; //resto=2321

    n2 = resto / 1000; //n2=2
    resto = resto % 1000; //resto=321

    n3 = resto / 100; //n3=3
    resto %= 100; //resto=21

    n4 = resto / 10; //n4=2
    n5 = resto % 10; //n5=1

    if (n1 == n5 && n2 == n4){
        printf("Il numero %d è palindromo\n", N);
    } else {
        printf("Il numero %d non è palindromo\n", N);
    }
    
return 0;   
}