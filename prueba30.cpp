#include<iostream>
#include<conio.h>

using namespace std;

// Cadenas de caracteres.

int main(){
    char palabra[] = "Alejandro";
    char palabra2[] = {'a','l','e','j','a','n'};
    char nombre[30];

    cout<<"Digite su nombre: ";
    //gets(nombre); //Forma mas adecuada de guardar strings 
    //No respeta la cantidad de caracteres establecida en la variable.
    cin.getline(nombre, 20, '\n');
    //Guarda cadena respetando el espacio en la memoria
    cout<<nombre<<endl;

    getch();
    return 0;
}