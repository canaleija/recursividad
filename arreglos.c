#include <stdio.h>

// prototipo  

// TODO: verificar lo de la long del arreglo


// podemos concluir, que el paso de parametros de arreglos por defecto es 
// por referencia

int manipulacion(int arreglo[]);

void burbuja (int arreglo[], int s);
void mezcla(int arreglo[], int s);


int main(int argc, char const *argv[])
{
    int arreglo [] = {5,4,3,2,1,0,3,4,5,6,76,7,7};

    burbuja(arreglo,sizeof(arreglo) / sizeof(arreglo[0]) );
    return 0;
}

void burbuja (int arreglo[], int s){
   
    
    for(int x=0; x<s;x++)
        for(int j=0; j<s-1;j++){

            if(arreglo[j+1]<arreglo[j]){

                int aux = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = aux;

            }

        }

}

void mezcla(int arreglo[], int s){

    
}