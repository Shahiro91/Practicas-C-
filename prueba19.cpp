#include<iostream>
#include<stdlib.h> // Pide que paracontinuar con el programa se pulse una telca

using namespace std;

//Do While

int main(){
    int i;
    i = 1;

    do{
        cout<<i<<endl;
        i++;
    }while(i<=10);
    

    system("pause");
    return 0;
}