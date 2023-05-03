#define COLONNE 100

extern int dimensioneMatrice();
extern void inizializzazioneMatrice(int a[][COLONNE], int n, int m);
extern void stampaMatrice(const int a[][COLONNE], int n, int m);
extern void stampaMenu();
extern void stampaDiagonale(const int a[][COLONNE], int n);
extern void stampaRiga(const int a[][COLONNE], int riga, int m, int n);
extern void stampaColonna(const int a[][COLONNE], int colonna, int n, int m);