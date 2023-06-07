#include <stdio.h>

struct nodo {

    int x;
    Nodo *next;
};

typedef struct nodo Nodo;

Nodo *mergeLists(Nodo *head_1, Nodo *head_2) {

    if (head_1 == NULL)
    {
        head_1 = head_2;
    }
    else
    {
        Nodo *tmp = head_1;
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = head_2;
    }
    return head_1;
}

void deleteList(Nodo *head) {
    
    if (head != NULL)
    {
        while (head->next != NULL)
        {
            Nodo *tmp=head;
            head=head->next;
            free(tmp);
        } 
    }
    
    
}

void deleteListRic(Nodo *head) {

    if (head != NULL)
    {
        if (head->next == NULL){
            free(head);
        }
        else{
            deleteListRic(head->next);
            free(head);
        }
    }
}