#include <iostream>

using namespace std;

int main() {
    int x, y, sum, mul, sub, mod;
    float div;

    cout<< "Agregar, multiplicar, restar y divicion de dos numeros" << endl;
    cout<< "Ingrese el primer numero" <<endl;
    cin>>x;
    cout<< "Ingres el segundo numero"<<endl;
    cin>>y;

    sum=x+y;
    mul=x*y;
    sub=x-y;
    mod=x%y;
    div=x/y;

    cout<<"Suma de "<< x <<" + "<<y<<" = "<<sum<<endl;
    cout<<"Multiplicacion de "<<x<<" * "<<y<<" = "<<mul<<endl;
    cout<<"Resta de "<<x<<" - "<<y<<" = "<<sub<<endl;
    cout<<"Modulo de "<<x<<" % "<<y<<" = "<<mod<<endl;
    cout<<"Division de "<<x<<" / "<<y<<" = "<<div<<endl;

    return 0;
}
