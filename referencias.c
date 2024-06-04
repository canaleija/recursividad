#include <stdio.h>

int referencia(int *x );

int main(int argc, char const *argv[])
{
    
    int k = 16;
    // variable que solo solo solo solo guarda una dirección
    // & me permite manipular una dirección
    int *d = &k;

    referencia(d);
    
    printf("%d",k);
    return 0;
}

int referencia(int *x){

    printf("%d",*x);
    *x=23;

    return 0;
}

