#include <iostream>

using namespace std;

int main(){
    int x, y, z;
    cout<<"Intercambio de numeros\n"<<endl;

    cout<<"Ingrese el primer numero: "<<endl;
    cin>>x;

    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>y;

    cout<<"Numeros antes de intercambio: "<<x<<" y "<<y<<endl;

    z=x;
    x=y;
    y=z;

    cout<<"Numeros despues de intercambio: "<<x<<" y "<<y<<endl;

    return 0;
}
