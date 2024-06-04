#include <stdio.h>
// library   biblioteca

// prototipo  devuelve|hace|necesita
int calculaFactorial(int x);
int calculaFactorialI(int x);

int main(int argc, char const *argv[])
{
    int f= calculaFactorial(0);
    printf("%d",f);
    return 0;
}

// implementación:   ¿cómo?
int calculaFactorial(int n){
    // caso base
    if(n==0) return 1;
    // caso general | caso recursivo
    return n * calculaFactorial(n-1);
}


