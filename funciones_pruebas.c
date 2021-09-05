#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "matriz_p.h"
int matrizi[59][6];
int vectortrans[6][59];
  int Leer_archivo(char *nombre) {
    char line[M1][M2];
    FILE *fpdo = fopen("Peliculas2.csv", "r");
    int k = 0;
    int no = 0;
    if (fpdo == NULL) {
        printf("No hay nada en %s\n", nombre);
        return 1;
    }


    while (fgets(line[k], M1, fpdo)) {
        line[strlen(line[k]) - 1][strlen(line[k]) - 1] = "\0";
        k++;
    }
    no = k;
    printf("\ %s tiene este contenido:\n", nombre);
    for (k = 0; k < no; k++) {
        printf("%s\n", line[k]);
    }
    printf("\n");
    fclose(fpdo); 
    
    return line[k][strlen(line[k]) - 1];
}
  void matrizNu(char *pa) {

    char *peliculas;
    int cont = 0;
    int conto = 0;
    char temp[100];
    char aux;
    FILE *f;
    f = fopen(pa, "r");
    if (f == NULL) {
        printf("no se ha podido abrir el fichero.\n");
        exit(1);

    }

    while (!feof(f)) {
        fgets(temp, 100, f);
        cont++;
    }
    
    rewind(f);
    while (aux != '\n') {
        aux = fgetc(f);


        if (aux == 44) {

            conto++;

        }

    }
    char matrizn[59][7];
    for (int i = 0; i < 59; i++) {
        int j = 0;
        while (aux != ',') {
            aux = fgetc(f);
            /*
                        printf("%c",aux);
             */
        }


        while (aux != '\n' && aux != EOF) {
            aux = fgetc(f);
            if (aux != ',' && aux != EOF && aux != '\n') {
                matrizn[i][j] = aux;
                j++;
            }


        }
    }
    
     matrizi[59][6];
    for (int i = 0; i < 59; i++) {
        for (int j = 0; j < 6; j++) {
            int numero = 0;
            numero = (int) matrizn[i][j];
            if (numero == 48) {
                matrizi[i][j]=0;
            } else
                matrizi[i][j]=1;
        }
    }
    puts("");

    for (int i = 0; i < 59; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%i\t",matrizi[i][j]);
            
        }
        printf("\n");
    }


    fclose(f); 

}
  void trans(){
    printf("\n-------------------------------------\n");
     vectortrans[6][59];
    int num;
    for(int i=0;i<59;i++){
        for(int j=0;j<6;j++){
            
            vectortrans[j][i]=matrizi[i][j];
        }
    }
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 59; j++) {
            printf(" %i ",vectortrans[i][j]);
            
        }
        printf("\n");
    }
}




