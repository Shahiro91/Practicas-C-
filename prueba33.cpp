#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char palabra1[] = "Hola";
    char palabra2 [] = "Hola";
    char cadena [30];

    if(strcmp(palabra1, palabra2) != 0){
        cout<<"ambas cadenas son iguales.";
    }
    
    if(strcmp(palabra1, palabra2) > 0){
        cout<<palabra1<<"esta despues alfabeticamente.";
    }

    strcpy(palabra1, cadena);
    strcat(cadena,palabra2);

    cout<<cadena<<endl;

    getch();
    return 0;
}

//Función strrev() invierte cadena de caracteres.
//funcion strupr() Pasar el string a mayusculas
//Pasar una palabra a minúscula - Función strlwr()
//Transformar una cadena a números - Función atoi() y atof()
