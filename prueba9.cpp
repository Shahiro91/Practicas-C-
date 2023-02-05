#include <iostream>
using namespace std;

int main(){

    int a, b, aux;

    cout<<"Digite el valor de a: "; cin>>a;
    cout<<"Digite el valor de b: "; cin>>b;
    aux = a;
    a = b;
    b = aux;

    cout<<"\n El nuevo valor de a es: "<<a;
    cout<<"\n El nuevo valor de b es: "<<b;

    return 0;
}