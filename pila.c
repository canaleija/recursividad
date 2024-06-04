#include <stdlib.h>
#include <stdio.h>

struct NodoLista
{
    int valor;
    struct NodoLista *ptrSiguiente;

};

// insertar
void insertar (struct NodoLista *posInicial, int valor);

int main(int argc, char const *argv[])
{
    
    struct NodoLista *ptrInicial = malloc(sizeof(struct NodoLista));
    ptrInicial-> valor = 8;
    ptrInicial->ptrSiguiente = NULL;

    insertar(ptrInicial,8);
    

}

void insertar (struct NodoLista *posInicial, int valor){
    // verificar si la pila esta vacia
    // se le agrega el primer Nodo
    if(posInicial == NULL){
        // tener listo en donde se va a almacenar
          struct NodoLista *posNuevo = malloc(sizeof(struct NodoLista));
          posNuevo->valor = valor;
          posNuevo->ptrSiguiente = NULL;
          posInicial = posNuevo;
    }else{
        // TENEMOS QUE BUSCAR EL ULTIMO ELEMENTO DE LA PILA
        // PARA AHÍ AGREGAR EL NUEVO NODO
        struct Nodolista *posActual = posInicial;


    }

}
