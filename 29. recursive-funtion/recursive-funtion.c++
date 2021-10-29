#include <iostream>

using namespace std;

int HCF (int x, int y);

int main(){
    int x, y;

    cout<< "Calculo de HCF\n"<<endl;

    cout<<"Ingrese el primer numero: "<<endl;
    cin>>x;

    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>y;

    cout<<"El HCF de "<<x<<" y "<<y<<" es "<<HCF(x,y);

    return 0;
}

int HCF(int x, int y){
    if(y != 0){
        return HCF(y, x%y);
    }else{
        return x;
    }
}
