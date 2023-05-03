#include <stdio.h>

int valore_assoluto(int x) {

}

int main() {

    int x;

    printf("Inserisci un numero: ");
    scanf("%d", &x);

    if(x<0) {
    x *= -1;
    }

    printf("Il suo valore assoluto è %d\n", x);
}