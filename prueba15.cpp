#include<iostream>

using namespace std;

int main(){
    int edad;

    cout<<"Digite su edad: ";
    cin>>edad;

    if((edad>=18)&&(edad<=25)){
        cout<<"Su edad esta dentro del rango 18-25";
    }else{
        cout<<"Su edad no esta dentro del rango";
    }

    return 0;
}