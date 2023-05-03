#include <stdio.h>

int main() {

    char x, y, z;
    // int x, y, z;
    printf("Inserisci tre caratteri: ");
    scanf("%c %c %c", &x, &y, &z);

    if ((y<x && y>z) || (y>x && y<z))
    {
        printf("Il secondo è compreso tra gli altri due\n");
    }
    

}