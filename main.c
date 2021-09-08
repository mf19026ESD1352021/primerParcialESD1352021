#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "matriz_p.h"

/*
 * 
 */


int main(void) {
   
 char path[] = "Peliculas2.csv";
    int *result;
    int numeros[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int numeros2[4][3] = {-3, 8, 4, 4, 1, 1, 5, 0, -3, 6, -9, 6};
    char n = Leer_archivo(path);
    int *w=matrizNu(path);
for (int i = 0; i < 59; i++) {
        for (int j = 0; j < 6; j++) {
            printf(" %i\t", *(w + i * 6 + j));
        }
        puts("");
    }
    puts("");

    const char* p = integrantes();
    
    
    puts("");
    int *nuevo = trans(w, 59, 6);
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 59; j++) {
            printf(" %i ", *(nuevo + i * 59 + j));
        }
        puts("");
    }
    
    result = multi(w, 59, 6, nuevo, 6,59 );
    puts("");
    puts("");
    for (int i = 0; i < 59; i++) {
        for (int j = 0; j < 59; j++) {
            printf(" %i ", *(result + i * 59 + j));
        }
        puts("");
    }
printf("%s", p);
    return 0;
}

