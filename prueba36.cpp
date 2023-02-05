#include<iostream>
#include<conio.h>

using namespace std;

//Busqueda secuencial

int main(){
    int a[]={3,2,4,1,5};
    int i, dato;
    char band = 'F';

    dato = 4;

    i=0;
    while((band =='F')&&(i<5)){
        if(a[i]==dato){
            band = 'V';
        }
        i++;
    }

    if(band == 'F'){
        cout<<"El numero a buscar no existe en el arreglo: "<<endl;
    }
    else if(band=='V'){
        cout<<"El numero ha sido encontrado en la posicion "<<i-1<<endl;
    }

    getch();
    return 0;
}