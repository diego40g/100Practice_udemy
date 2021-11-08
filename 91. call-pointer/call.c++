#include <iostream>

using namespace std;

void point_swap(int *x, int *y);

int main(){
    int x,y;

    cout<<"Llamada con puntero\n"<<endl;

    cout<<"Ingrese el primer numero: "<<endl;
    cin>>x;

    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>y;

    cout<<"Numero antes del intercambio: "<<x<<" y "<<y<<endl;

    point_swap(&x,&y);

    cout<<"Numero despues del intercambio: "<<x<<" y "<<y<<endl;

    return 0;
}

void point_swap(int *x, int *y){
    int z;

    z=*x;
    *x=*y;
    *y=z;
}
