#include<iostream>
#include<conio.h>

using namespace std;

struct info_direccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
}empleados[2];

int main(){

    for(int i=0;i<2;i++){
        fflush(stdin);//Vaciar el buffer y permitir digitar los valores
        cout<<"Digite su nombre: ";
        cin.getline(empleados[i].nombre,20,'\n');
        cout<<"Digite su direccion: ";
        cin.getline(empleados[i].dir_empleado.direccion,30, '\n');

    }




    getch();
    return 0;
}