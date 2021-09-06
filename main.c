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
    matrizNu(path);

    const char* p = integrantes();
    printf("%s", p);
    puts("");
    int *nuevo = trans(&numeros, 3, 4);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %i\t", *(nuevo + i * 3 + j));
        }
        puts("");
    }
    result = multi(&numeros, 3, 4, &numeros2, 4, 3);
    puts("");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %i\t", *(result + i * 3 + j));
        }
        puts("");
    }

    return 0;
}

