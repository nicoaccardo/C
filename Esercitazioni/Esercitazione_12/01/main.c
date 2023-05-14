//** Scrivere una funzione ricorsiva C che, dato un numero calcola la somma dei primi N numeri pari positivi
#include <stdio.h>

int sommaPari(const int x);

int main(void){

    int n, pari=0;

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    if (n<0)
    {
        puts("Errore: il numero deve essere maggiore di 0");
        return 1;
    }

    pari=sommaPari(n);

    printf("La somma dei primi N numeri pari è: %d\n", pari); 

    return 0;
}

int sommaPari(const int x)
{
    // *Funzione che somma i numeri pari fino a N
    // if (x<=1)
    // {
    //     return 0;
    // } 
    
    // else if ((x%2)==0)
    // {
    //     return x + sommaPari(x-2);
    // }

    // else
    // {
    //     return sommaPari(x-1);
    // }

    // *Funzione che somma i primi N numeri pari
    if (x==0)   // Caso base
    {
        return 0;
    }
    else    // Passo ricorsivo
    {
        return 2*x + sommaPari(x-1);
    }
    
    
}