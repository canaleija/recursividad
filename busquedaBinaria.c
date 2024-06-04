#include <stdio.h>
//PROTOTIPOS
int busquedaBinaria(int arr[], int j, int i, int d);


int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5,6,7,8};

    // ordenar mezcla

    int pos = busquedaBinaria(arr,5,0,7);
   
    return 0;
}
//FUNCIONES
int busquedaBinaria(int arr[], int j, int i, int d)
{
    int pos = -1;
    int m=(i+d)/2;
    //ESTAMOS POR CONSIDERAR UN CASO BASE
    if(arr[m]==j) return m;
    //PRIMER CASO GENERAL
    if(j>arr[m])  pos =  busquedaBinaria(arr,j,m+1,d);
    //SEGUNDO CASO GENERAL
    if(j<arr[m]) pos =  busquedaBinaria(arr,j,i,m);
    return pos; 
}
