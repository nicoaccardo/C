// Programma che avendo ore, minuti e secondi calcola i secondi totali

#include <stdio.h>

// int ore_sec(int x) {
//     return x *= 3600;
// }

// int min_sec(int x) {
//     return x *= 60;
// }

// int somma(int x, int y, int z) {
//     return x = x + y + z;
// }

int main() {

    int h, m, s;

    printf("\nInserisci ore, minuti e secondi: ");
    scanf("%d %d %d", &h, &m, &s);

    // int h_s = ore_sec(h);
    // int m_s = min_sec(m);
    // int totale = somma(h_s, m_s, s);

    int h_s = h * 3600;
    int m_s = m * 60;
    int totale = h_s + m_s + s;

    printf("\nTotale secondi: %d\n\n", totale);
    return 0;
}

// Ho scritto il programma sia con funzioni immediate, sia con funzioni a richiamo (commenti)

// data: 09/03/2023


