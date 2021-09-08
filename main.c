#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "matriz_p.h"

/*
 * 
 */


int main(void) {
    ///Codigo de prueba no es necesario utilizarlo
   
/*
 char path[] = "Peliculas2.csv";
    int *result;
    puts("");
    printf("<---------------------------->");
    printf("P R I M E R A   P A R T E");
    printf("<----------------------------->");
    puts("");
    modificacion *prueba;
     prueba=Leer_archivo(path);
        
    for(int j=0;j<60;j++){
        for(int x=0;x<7;x++){
            printf(" %s ",*(prueba+j*7+x));
        }
        puts("");
    }
     puts("");
printf("<---------------------------->");
    printf("S E G U N D A   P A R T E");
    printf("<----------------------------->");
    puts("");
    int *w=matrizNu(path);
for (int i = 0; i < 59; i++) {
        for (int j = 0; j < 6; j++) {
            printf(" %i\t", *(w + i * 6 + j));
        }
        puts("");
    }
   

    puts("");
      printf("<---------------------------->");
    printf("T E R C E R A   P A R T E");
    printf("<----------------------------->");
    puts("");
    
   
    int *nuevo = trans(w, 59, 6);
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 59; j++) {
            printf(" %i ", *(nuevo + i * 59 + j));
        }
        puts("");
    }
    puts("");
    printf("<---------------------------->");
    printf("C U A R T A   P A R T E");
    printf("<----------------------------->");
    puts("");
    result = multi(w, 59, 6, nuevo, 6,59 );
    
    puts("");
    for (int i = 0; i < 59; i++) {
        for (int j = 0; j < 59; j++) {
            printf(" %i ", *(result + i * 59 + j));
        }
        puts("");
    }
    puts("");
    printf("<---------------------------->");
    printf("Q U I N T A   P A R T E");
    printf("<----------------------------->");
    puts("");
const char* p = integrantes();
    
    printf("%s", p);
*/
    return 0;
}

