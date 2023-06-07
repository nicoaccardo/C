// Programma che permette di gestire un insieme di numeri interi
#include <stdio.h>
#include <functions.h>
#include <variables.h>

int main(void) {

    char option;
    Nodo *head = NULL;

    do
    {
        printMenu(&option);
        
        switch (option)
        {
        case 'a':
            newElement(&head);
            break;
        
        default:
            break;
        }

    } while (option!=0);
    

    return 0;
}