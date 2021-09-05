#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "matriz_p.h"
/*
 * 
 */


int main(void) {
    char path[]="Peliculas2.csv";

    int n=Leer_archivo(path);

    matrizNu(path);
    trans();

    return 0;
}

