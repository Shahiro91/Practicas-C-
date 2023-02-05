#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numeros[100], n;

    cout<<"Digite la cantidad de numeros que quiera poner en el arreglo: "; cin>>n;
    for(int i = 0; i<n ;i++){
        cout<<"Digite un numero: "; 
        cin>>numeros[i]; //Guarda los elementos en el arreglo
    }
    
    for(int i = 0; i<n ; i++){
        cout<<i<<" -> "<<numeros[i];
    }

    getch();
    return 0;
}