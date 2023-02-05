#include<iostream>
#include<conio.h>

using namespace std;

//Plantillas de la funcion

template<class TIPOD>
void mostrarAbs(TIPOD numero);

int main(){
    int num1 = -4;
    float num2 = -56.48;
    double num3 = -486.1894;

    mostrarAbs(num1);
    mostrarAbs(num2);
    mostrarAbs(num3);

    getch();
    return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero){
    if(numero<0){
        numero *= -1;
    }
    cout<<"El valor absoluto del numero es: "<<numero;

}