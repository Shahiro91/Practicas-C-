#include<iostream>
#include<math.h>//Libreria con expresaiones matematicas

using namespace std;

int main(){
    float x, y, resultado = 0;

    cout<<"Digite el valor de x: "; cin>>x;
    cout<<"Digite el valor de y: ";cin>>y;

    resultado = (sqrt(x))/(pow(y,2)-1); //sqrt = raiz, pow= potencia.

    cout<<"El resultado de la expresion es: "<<resultado<<endl;

    return 0;
}