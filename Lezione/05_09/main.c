//**Definire una funzione ricorsiva che calcoli la funzione di Fibonacci 
#include <stdio.h>

int fibonacci(int n);

int main(void){

    int i, x;
    printf("Che numero di Fibonacci vuoi? ");
    scanf("%d", &i);

    x = fibonacci(i);
    if (x!=-1)  {
    printf("Il numero di Fibonacci %d è: %d\n", i, x);
    }

    return 0;
}

int fibonacci(int n)
{
    //Controllo degli errori
    if (n<=0)
    {
        puts("Errore: la funzione di Fibonacci richiede input positivi");
        return -1;
    }
    
    //Caso base 1
    if (n==1){
        return 0;
    }
    //Caso base 2
    else if (n==2){
        return 1;
    }
    //Passo ricorsivo
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }

    return 0;
}
