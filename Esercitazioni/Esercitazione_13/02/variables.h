#define MAXLENGHT 30

struct pietanza
{
    int *num_ingr;
    int *t_cottura;
    int **dosi;
    char **nomi;
    char **tipologia;
    char ***ingredienti;
};

typedef struct pietanza Pietanza;