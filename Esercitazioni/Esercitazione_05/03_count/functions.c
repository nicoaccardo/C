#include <stdio.h>
#include "variables.h"

void conteggio(int n) {

    if (n < 0){
            negativi ++;
        } else if (n > 0){
            positivi ++;
        } else {
            nulli ++;
        }
}