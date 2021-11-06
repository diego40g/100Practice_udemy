#include <iostream>

using namespace std;

int main(){
    int amt[200], pos, x, y, num;
    cout<<"Ingresar elemento en Array\n"<<endl;

    cout<<"Elija rango del arreglo: "<<endl;
    cin>>x;

    cout<<"Ingrese "<<x<<" elementos"<<endl;
    for(y=0;y<x;y++){
        cin>>amt[y];
    }

    cout<<"Elija en que posicion decea el nuevo elemento; "<<endl;
    cin>>pos;

    cout<<"Ingrese el nuevo elemento: "<<endl;
    cin>>num;

    for(y=x-1;y>=pos-1;y--){
        amt[y+1]=amt[y];
    }

    amt[pos-1]=num;

    cout<<"El arreglo de elementos es: "<<endl;
    for(y=0;y<=x;y++) {
        cout<<amt[y]<<endl;
    }

    return 0;
}
