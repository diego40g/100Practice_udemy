#include<iostream>

using namespace std;

void ref_swap(int &x, int &y);

int main(){
    int x,y;
    cout<<"Llamada por referencia\n"<<endl;

    cout<<"Ingrese el primer numero: "<<endl;
    cin>>x;

    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>y;

    cout<<"Numero antes de ingreso: "<<x<<" y "<<y<<endl;
    ref_swap(x,y);
    cout<<"Numero despues de ingreso: "<<x<<" y "<<y<<endl;

    return 0;
}

void ref_swap(int &x, int&y){
    int z;

    z=x;
    x=y;
    y=z;

    return;
}
