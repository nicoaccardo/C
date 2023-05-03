// Programma che avendo i lati del triangolo stampa se è scaleno, isoscele o equilatero
#include <stdio.h>

int main() {

    int l1, l2, l3;

    printf("\n%s","Inserisci i lati del triangolo: ");
    scanf("%d %d %d", &l1, &l2, &l3);

    if ((l1<l2+l3) && (l2<l1+l3) && (l3<l2+l1))
    {
        
    if (l1==l2 && l1==l3) {
        printf("\nIl triangolo è equilatero\n\n");
    }

    if(l1!=l2 && l1!=l3 && l2!=l3) {
        printf("\nIL triangolo è scaleno\n\n");
    }

    if ((l1==l2 && l1!=l3) || (l1==l3 && l1!=l2) || (l2==l3 && l2!=l1)) {
        printf("\nIl triangolo è isoscele\n\n");
    }
    } else {
        printf("\nNon è un triangolo\n\n");
    }
    

    
    
}