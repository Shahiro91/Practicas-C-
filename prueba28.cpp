#include<iostream>
#include<conio.h>

using namespace std;

//Matrices o tablas

int main(){
    int numeros[100][100], filas, columnas;

    cout<<"Digite el numero de filas: "; cin>>filas;
    cout<<"Digite la cantidad de columnas del arreglo: "; cin>>columnas;
    
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]";
            cin>>numeros[i][j];
        }
        cout<<"\n";
    }

    getch();
    return 0;
}