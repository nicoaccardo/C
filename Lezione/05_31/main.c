#include <stdio.h>

struct nodoStruct {
    int value;
    struct nodoStruct *prec;
    struct nodoStruct *succ;
};

typedef struct nodoStruct Nodo;

void insertAfterHead(Nodo *head, int v){

    Nodo *new = NULL;
    if((new = (Nodo *) malloc(sizeof(Nodo))!=NULL)){
        new->value = v;
        new->prec = NULL;
        new->succ = NULL;

        if (head!=NULL)
        {
            new->prec = head;
            new->succ = head->succ;
            head->succ = new;
            if (new->succ!=NULL)
            {
                new->succ->prec = new;
            }
        }
    }
}

Nodo *deleteNode(Nodo *head, int v){

    if (head!=NULL)
    {
        if (head->value==v)
        {
            //* Il nodo da eliminare è la testa
            Nodo *tmp = head;
            head = head->succ;
            free(tmp);
            if (head!=NULL)
            {
                head->prec=NULL;
            }   
        }
        else {
            Nodo *current=head;
            while (current!=NULL && current->value != v)
            {
                current = current->succ;
            }
            if (current!=NULL) //* Il ciclo while è terminato perchè value == v
            {
                current->prec->succ = current->succ;
                if (current->succ!=NULL)
                {
                    current->succ->prec = current->prec;
                }
                free(current);   
            }      
        }
    } 
    return head;
}