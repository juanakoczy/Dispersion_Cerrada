//
// Created by Usuario on 9/9/2023.
//

#include "hash cerrado.h"
#include "string.h"
#include "stdio.h"

Nodo tablaDeHash[TAM];//IMPORTANTE DECLARAR ESTO ACA, ESTA INICIALIZANDO LA TABLA?

int hash (int clave){
    return clave % TAM;//mantiene la llave dentro de la tabla
}

void insertar (int clave, const char * nombre){

    int indice = hash(clave);//calcula el indice en la tabla

    if (tablaDeHash[indice].clave == -1){//la posicion esta vacia,inserto
        tablaDeHash[indice].clave = clave;
        strncpy (tablaDeHash[indice].nombre,nombre,sizeof(tablaDeHash[indice].nombre));
    }
    else{//la posicion esta ocupada
        int nuevoIndice = (clave + 1) % TAM; //resuelvo la colision con redispercion simple

    while (nuevoIndice != indice && tablaDeHash[indice].clave != -1){//busco la posicion vacia

        nuevoIndice = (nuevoIndice + 1) % TAM;
    }
        if (tablaDeHash[nuevoIndice].clave == -1) {//inserto en la posicion vacia
            tablaDeHash[nuevoIndice].clave = clave;
            strncpy(tablaDeHash[nuevoIndice].nombre, nombre, sizeof(tablaDeHash[nuevoIndice].nombre));
        }
        else {//no encuentra posicion vacia
            printf("No se pudo insertar el elemento con clave %d: Tabla llena.\n", clave);
        }
    }
}


void eliminar (int clave){

    int indice = hash(clave);

    while(tablaDeHash[indice].clave != -1){
        if (tablaDeHash[indice].clave == clave){
            tablaDeHash[indice].clave = -1;
            return;
        }
        indice = (indice+1) % TAM;
    }
    printf ("No se encuentra en la tabla la clave %d, no se puede eliminar.",clave);
}

void imprimir (){

    printf("Tabla de Hash:\n");
    for (int i = 0; i < TAM ; i++){
        if(tablaDeHash[i].clave != -1)
            printf("Posicion %d, Clave %d, nombre: %s.\n", i+1, tablaDeHash[i].clave, tablaDeHash[i].nombre);
    }
}

