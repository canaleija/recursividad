#include <stdio.h>

 struct elemento
{
    int valor;
    struct elemento *autorreferencia;

} ;

int main(int argc, char const *argv[])
{
    struct elemento inicial,b,c,d,e,f; 
    
    inicial.valor = 8;
    inicial.autorreferencia = &b;

    b.valor = 9;
    b.autorreferencia = &c;

    c.valor = 10;
    c.autorreferencia = &d;

    d.valor = 11;
    d.autorreferencia = &e;

    e.valor = 12;
    e.autorreferencia = &f;

    f.valor = 13;
    f.autorreferencia = &inicial;

    // recorrido de la estrucutura
    struct elemento  *aux = &inicial;
  
   do{
    // imprime el valor
    printf("%d,,",aux->valor);
       // actualizamos aux
    aux = aux->autorreferencia;

   }while (aux->autorreferencia!=inicial.autorreferencia);
    
    
    // siga iterando
    
    





    
    return 0;
}
