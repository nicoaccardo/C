// Programma che controlla se un anno è bisestile o meno
#include <stdio.h>

int main () {

    int anno;

    printf("\n%s", "Inserisci un anno: ");
    scanf("%d", &anno);

// Una anno è bisestile se è divisibile per 4 ma non per 100, oppure è divisibile per 400
    if((anno % 4) == 0) {

        if((anno % 100) != 0) {
            printf("\nL'anno è bisestile\n\n");
        } 
        
        else if((anno % 400) == 0) {
            printf("\nL'anno è bisestile\n\n");
        }

        else {
            printf("\nL'anno non è bisestile!!\n\n");
        }
    } 
    
    else {
        printf("\nL'anno non è bisestile!!\n\n");
    }
}