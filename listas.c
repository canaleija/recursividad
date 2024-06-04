#include <stdlib.h>
#include <stdio.h>


struct nodoLista
{
    int valor;
    struct nodoLista *ptrSiguiente;

};

typedef struct nodoLista NodoLista;
typedef  NodoLista *ptrNodoLista;

// prototipado

void insertar (ptrNodoLista *ptrS, int valor);
void imprimirLista (ptrNodoLista ptrActual);
int eliminar( ptrNodoLista *ptrS, int valor );
int actualizar( ptrNodoLista *ptrS, int valorActual, int valorNuevo );

int main(int argc, char const *argv[])
{
    // de manera inicial no existen nodos
    ptrNodoLista ptrInicial = NULL;
 

    insertar(&ptrInicial,699);
    insertar(&ptrInicial,8);
    insertar(&ptrInicial,17);
    
    imprimirLista(ptrInicial);

    eliminar(&ptrInicial, 8);

    imprimirLista(ptrInicial);

    return 0;
}

void insertar (ptrNodoLista *ptrS, int valor){
    ptrNodoLista ptrNuevo;
    ptrNodoLista ptrAnterior;
    ptrNodoLista ptrActual;

    ptrNuevo = malloc(sizeof(NodoLista));

    // verificamos si se asignó espacio en la memoria
    if(ptrNuevo != NULL){
    // asignamos a la memoria el valor
    ptrNuevo->valor = valor;
    ptrNuevo->ptrSiguiente = NULL;

    ptrAnterior = NULL;
    ptrActual = *ptrS;
    
    if(ptrAnterior == NULL){
        ptrNuevo->ptrSiguiente=*ptrS;
        *ptrS = ptrNuevo;

    }
    /*
    else{
        ptrAnterior->ptrSiguiente = ptrNuevo;
        ptrNuevo->ptrSiguiente = ptrActual;

    }*/

    }else{
        printf("Error al insertar por falta de memoria\n");
    }


}

void imprimirLista (ptrNodoLista ptrActual){

if(ptrActual == NULL){

    printf("La lista esta vacia\n");
}else{

    printf("La lista es: \n");

    while (ptrActual != NULL)
    {
        printf("%d ->",ptrActual->valor);
        ptrActual = ptrActual->ptrSiguiente;
    }
    printf("NULL\n\n");
    
}


}

int eliminar( ptrNodoLista *ptrS, int valor ){

ptrNodoLista ptrAnterior; /* apuntador a un nodo previo de la lista */
ptrNodoLista ptrActual; /* apuntador al nodo actual de la lista */
ptrNodoLista tempPtr; /* apuntador a un nodo temporal */

/* elimina el primer nodo */
if ( valor == ( *ptrS )->valor ) {
        tempPtr = *ptrS; /* almacena el nodo a eliminar */
        *ptrS = ( *ptrS )->ptrSiguiente; /* desata el nodo */
        free( tempPtr ); /* libera el nodo desatado */
        return valor;
    
} else{

ptrAnterior = *ptrS;
ptrActual = ( *ptrS )->ptrSiguiente;

/* ciclo para localizar la ubicación correcta en la lista */
while ( ptrActual != NULL && ptrActual->valor != valor ) {
ptrAnterior = ptrActual; /* entra al ... */
ptrActual = ptrActual->ptrSiguiente; /* ... siguiente nodo */
} /* fin de while */

/* elimina el nodo de ptrActual */
if ( ptrActual != NULL ) {
tempPtr = ptrActual;
ptrAnterior->ptrSiguiente = ptrActual->ptrSiguiente;
free( tempPtr );
 return valor;
 } /* fin de if */

} // fin else
return 0;
}


int actualizar( ptrNodoLista *ptrS, int valorActual, int valorNuevo ){

    
}