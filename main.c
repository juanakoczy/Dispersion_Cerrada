//Funcion eliminar para una dispersion cerrada
#include <stdio.h>
#include "hash cerrado.h"

int main() {

    for (int i = 0; i < TAM ; i++){
        tablaDeHash[i]->clave = -1;
        tablaDeHash[i]->nombre[20]  = '\0';
    }


    insertar(5,"juan");
    insertar(5,"marcos");
    insertar(2,"maria");
    insertar(3,"luisa");

    imprimir();

    eliminar(3);

    imprimir();

    return 0;
}
