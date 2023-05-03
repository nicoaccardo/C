// Programma che avendo tre valori ne calcola la media e il margine di incertezza
#include <stdio.h>

float media (float x, float y, float z) {
    return (x + y + z)/3;
}

// Funzione che calcola l'incertezza
float semi_dispersione_max(float x, float y) {
    return (x - y)/2;
}

int main() {

    float t1, t2, t3, t_min, t_max, t_medio, t_incertezza;

    printf("\nInserisci i tre tempi in secondi: ");
    scanf("%f %f %f", &t1, &t2, &t3);

    // Costrutto if per memorizzare il valore maggiore e quello minore fra i tre
    if( t1 <= t2 && t1 <= t3) {

        if(t2<=t3) {
            t_min = t1;
            t_max = t3;
        } else {
            t_min = t1;
            t_max = t2;
        }
    }
        else if (t1<=t2 && t1>=t3) {
            t_min = t3;
            t_max = t2;
        }

        else if (t1<=t3 && t1>=t2) {
            t_min = t2;
            t_max = t3;
        }

    t_medio = media(t1,t2,t3);
    t_incertezza = semi_dispersione_max(t_max, t_min);

    // Simbolo del più o meno espresso in Unicode: \u00b1
    printf("\nIl risultato è: (%.1f \u00b1 %.1f)s\n\n", t_medio, t_incertezza);
    return 0;

    // 11/03/23
}