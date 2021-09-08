#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "matriz_p.h"


char **Leer_archivo(char *nombre) {
    char line[M1][M2];
    FILE *fpdo = fopen("Peliculas2.csv", "r");
    int k = 0;
    int no = 0;
    if (fpdo == NULL) {
        printf("No hay nada en %s\n", nombre);
        return NULL;
    }


    while (fgets(line[k], M1, fpdo)) {
        line[strlen(line[k]) - 1][strlen(line[k]) - 1] = "\0";
        k++;
    }
    no = k;
    printf(" %s tiene este contenido:\n", nombre);
    for (k = 0; k < no; k++) {
        printf("%s\n", line[k]);
    }
    printf("\n");
    return line;


}
  int *matrizNu(char *pa) {

    
    int cont = 0;
    int conto = 0;
    char temp[100];
    char aux;
    char *numeroc;
    FILE *f;
    f = fopen(pa, "r");
    if (f == NULL) {
        printf("no se ha podido abrir el fichero.\n");
        return 0;
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
 
    int *p=(int *)malloc((cont-1)*(conto)*sizeof(int));
    for (int i = 0; i < (cont-1); i++) {
        int j = 0;
        while (aux != ',') {
            aux = fgetc(f);
          
        }

        while (aux != '\n' && aux != EOF) {
            aux = fgetc(f);
            if (aux != ',' && aux != EOF && aux != '\n') {
                numeroc=&aux;
                *(p+i*conto+j) = atoi(numeroc);
                j++;
            }


        }
    }
    
    

    puts("");

    fclose(f); 
    return p;

}
  int *trans(int *matriz,int filas,int columnas){
      int *nuevaM=(int *)malloc(columnas*filas*sizeof(int));
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            *(nuevaM+j*filas+i)=*(matriz+i*columnas+j);
        }
    }
    return nuevaM;
}

const char* integrantes() {
    const char * integrante[]={"MF19026,RC19102"};
    return *integrante;
}
int *multi(int *matriz,int f1,int c1,int *matriz2,int f2,int c2){
    int valor;
    int *result=(int*)malloc(f1*c2*sizeof(int));
    if(c1=f2){
       for (int i = 0; i < f1; i++) {//filas

        for (int j = 0; j < c2; j++) {//recorre columnas segunda matriz
            
            valor = 0;
            
            for (int x = 0; x < c1; x++) {//recorrer columnas dela primera 
                valor += (*(matriz+i*c1+x)) * (*(matriz2+x*c2+j));
            }
              *(result+i*c2+j)=valor;

        }
   
    }

   
    return result; 
    }else{
        puts("no se a podido hacer la multiplicacion");
        return 0;
    }
    
}

