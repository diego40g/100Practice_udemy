#include <iostream>

using namespace std;

int main(){
    int x,y;
    cout<<"Intercambio de numeros con dos variables"<<endl;

    cout<<"Ingrese el primer numero: "<<endl;
    cin>>x;

    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>y;

    cout<<"Numero antes del intercambio: "<<x<<" y "<<y<<endl;

    x=x+y;
    y=x-y;
    x=x-y;

    cout<<"Numero despues del intercambio: "<<x<<" y "<<y<<endl;

    return 0;
}
