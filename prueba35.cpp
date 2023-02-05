#include<iostream>
#include<conio.h>

using namespace std;

//Metodo burbuja, ordena los elementos de menor a mayor (ordenamiento)
int main(){
    int numeros[]= {6,8,2,9,1,3};
    int i,j,aux;

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if(numeros[j]>numeros[j+1]){
                aux = numeros[j];
                numeros[j]= numeros[j+1];
                numeros[j+1]= aux;
            }
        }
    }

    cout<<"Orden ascendente: ";
    for(i=0;i<6;i++){
        cout<<numeros[i];
    }

    getch();
    return 0;
}

/*Ordenamiento por seleccion, busca el menor elemento y lo lleva al inicio del arreglo y asi sucesivamente hasta dejar ordenado el mismo
int i,j,aux,min;


for(i=0;i<6;i++){
    min = i;
    for(j=0;j<6;j++){
        if(numeros[j]<numeros[min]){
            min= j;
        }
    }
    aux= numeros[i];
    numeros[i]= numeros[min];
    numeros[min]=aux;
}



*/