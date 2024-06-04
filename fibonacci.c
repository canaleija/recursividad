#include <stdio.h>
// library   biblioteca

// prototipo  devuelve|hace|necesita
int calculaFibonacci(int n);

int main(int argc, char const *argv[])
{
    int f= calculaFibonacci(34);
    printf("%d",f);
    return 0;
}

// implementación:   ¿cómo?
int calculaFibonacci(int n){
    // caso base
    if(n==1) return 0;
    if(n==2) return 1;
    // caso general | caso recursivo
    return calculaFibonacci(n-1)+calculaFibonacci(n-2);
}


