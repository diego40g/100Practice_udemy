#include <iostream>

using namespace std;

int main() {

    int x, y, z, sum=0;

    cout<< "Agregar n numeros\n"<<endl;
    cout<< "Elija el rango de los numero que se ingresaran: "<<endl;
    cin>>x;

    cout<< "Insertar "<<x<<" solo numero porfavor"<<endl;

    for(y=1; y<=x; y++){
        cin>>z;
        sum=sum+z;
    }

    cout<< "El resultado sumado de "<<x<<" numeros es igual a: "<<sum<<endl;

    return 0;
}