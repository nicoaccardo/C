//**Definire una funzione ricorsiva che calcoli la funzione di Fibonacci 
#include <stdio.h>
int fibonacci (int x);

int main(void){

    long int x, fib;

    puts("Inserisci un valore x: ");
    scanf("%ld", &x);

    fib=fibonacci(x);

    printf("Il risultato della funzione di fibonacci è: %ld\n", fib);

    return 0;
}

int fibonacci(int x)
{
    if (x==0)
    {
        return 0;
    }
    
    if (x==1)
    {
        return 1;
    }
    
    else
    {
        return fibonacci(x-1) + fibonacci (x-2);
    }
}
