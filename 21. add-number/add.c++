#include <iostream>

using namespace std;

int main(){
    int x, y, sum = 0;

    cout<<"Suma de los digitos\n"<<endl;
    cout<<"Insertar algun numero"<<endl;
    cin>>x;

    do{
        y = x%10;
        sum = sum + y;
        x = x/10;
    }while(x != 0);

    cout<<"El resultado de agregar numeros = "<<sum<<endl;

    return 0;
}
