/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   matriz_j.h
 * Author: carlos
 *
 * Created on 4 de septiembre de 2021, 10:14
 */

#ifndef MATRIZ_P_H
#define MATRIZ_P_H
#define M1 130
#define M2 60
typedef char modificacion[10000];
char *Leer_archivo(char *nombre);
int *matrizNu(char *pa);
int *trans(int *matriz,int filas,int columnas);
const char* integrantes();
int *multi(int *matriz,int f1,int c1,int *matriz2,int f2,int c2);
#endif /* MATRIZ_P_H */

