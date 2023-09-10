//
// Created by Usuario on 9/9/2023.
//

#ifndef DISPERSION_CERRADA_HASH_CERRADO_H
#define DISPERSION_CERRADA_HASH_CERRADO_H
#define TAM 5

typedef struct nodo{

    int clave;
    char nombre[25];

}Nodo;

Nodo * tablaDeHash[TAM];
int hash (int clave);
void insertar (int clave,const char * nombre);
void eliminar (int clave);
void imprimir ();

#endif //DISPERSION_CERRADA_HASH_CERRADO_H
