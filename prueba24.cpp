#include <iostream>
#include <conio.h>

using namespace std;

//Arreglos

int main(){
    int numeros[5] = {1,2,3,4,5};
    int suma = 0;

    for(int i=0; i<5;i++){
    suma+= numeros[i];
    }

    cout<< "la suma de los elementos de los arreglos es "<< suma;
    getch();
    return 0;
}