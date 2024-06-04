#include <stdlib.h>
#include <stdio.h>


struct Estructura
{
    int x;
    int y;
    struct Estructura *aux;
};


int main(int argc, char const *argv[])
{
    

    struct Estructura *ptrInicial = malloc(sizeof(struct Estructura));

    ptrInicial->x = 9;
    ptrInicial->y = 27;
    ptrInicial->aux = malloc(sizeof(struct Estructura));
    
    struct Estructura *ptrSegundo = ptrInicial->aux;
    ptrSegundo->x = 3;
    ptrSegundo->y = 18;
    ptrSegundo->aux = malloc(sizeof(struct Estructura));

    struct Estructura *ptrTercero = ptrSegundo->aux;
    ptrTercero->x = 21;
    ptrTercero->y = 34;
    ptrTercero->aux = NULL;


    return 0;
}
