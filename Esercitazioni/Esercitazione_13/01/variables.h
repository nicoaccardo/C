#define MAXLENGHT 30

struct pietanza
{
    char nome[MAXLENGHT];
    int num_ingr;
    char **ingredienti; //! Le stringhe sono array di caratteri, quindi un array di stringhe è un array di array
    int *dosi;
    unsigned int t_cottura;
    char tipologia[10];
};

typedef struct pietanza Pietanza;