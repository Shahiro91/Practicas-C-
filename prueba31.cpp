//funcion strlen() longitud de cadenas de cracteres

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char palabra[] = "hola";
    int longitud = 0;

    longitud = strlen(palabra);

    cout<<"El numero de elementos de la cadena es: "<<longitud<<endl;

    getch();
    return 0;
}