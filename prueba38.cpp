#include<iostream>
#include<conio.h>
//Estructuras
using namespace std;

struct Persona{
    char nombre[20];
    int edad;
}persona3,
persona1 = {"Alejandro",20},
persona2 = {"Ruperto",50};

int main(){
cout<<"El nombre dela persona 1 es "<<persona1.nombre<<endl;
cout<<"La edad de la persona 1 es"<<persona1.edad<<endl;

cout<<"El nombre dela persona 2 es "<<persona2.nombre<<endl;
cout<<"La edad de la persona 2 es"<<persona2.edad<<endl;
//Guardar datos ingresados por usuario
cout<<"Nombre: "; cin.getline(persona3.nombre,20,'\n');
cout<<"Edad: "; 
cin>>persona3.edad;

    getch();
    return 0;
}