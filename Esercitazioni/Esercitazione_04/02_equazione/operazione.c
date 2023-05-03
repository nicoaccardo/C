#include <stdio.h>

int main() {

    int x, y, R;
    char s;

    printf("Inserisci una operazione: ");
    scanf("%d %c %d", &x, &s, &y);

    switch (s)
    {
    case '+':
        int A = x+y;
        printf("Il risultato è: %d\n", A);
        break;

    case '*':
        int M = x*y;
        printf("Il risultato è: %d\n", M);
        break;

    case '/':
        int D = x/y;
        printf("Il risultato è: %d\n", D);
        break;

    case '-':
        int S = x-y;
        printf("Il risultato è: %d\n", S);
        break;
    
    default: 
        printf("Erroref\n");
        break;
    }
}