#include <iostream>

using namespace std;

int main(){
    int saldo_inicial = 1000,opcion;
    float extra, retiro , saldo = 0;

    cout<<"\tBienvenido a su cajero automatico"<<endl;
    cout<<"1. Ingresar dinero a tu cuenta"<<endl;
    cout<<"2. Retirar dinero a tu cuenta"<<endl;
    cout<<"3. Salir"<<endl;
    cin>>opcion;

switch(opcion){
    case 1:
        cout<<"Digite la cantidad de dinero a ingresar: ";
        cin>>extra;
        saldo = saldo_inicial + extra;
        cout<<"Dinero en cuenta: "<<saldo; break;
    case 2:
        cout<<"Digite la cantidad de dinero a retirar: ";
        cin>>retiro;

        if(retiro > saldo_inicial){
            cout<<"No tiene ese saldo disponible";
        } else{
            saldo = saldo_inicial - retiro;
            cout<<"Dinero en cuenta: "<<saldo;
        }
    case 3: break;

}

}