#include <stdio.h>
#include <stdlib.h>
#include "variables.h"
#include "functions.h"

int main(void){

    Pietanza piatto;
    char opzione;
    int nPietanze=0;

    do
    {
        stampaMenu(&opzione);
        
        switch (opzione)
        {
        case 'a':
            nPietanze++;
            inserirePietanza(&piatto, nPietanze);
            break;

        case 'b':
            // nomePietanza(&piatto, nPietanze);
            break;
        
        default:
            break;
        }
    } while (opzione != 0);
    

    deAllocazione(&piatto, nPietanze);

    return 0;
}