#include <iostream>

using namespace std;

int main(){
    int x,y,rev[100];

    cout<<"Arreglo de numero inversos\n"<<endl;

    cout<<"Ingrese el total de numero: "<<endl;
    cin>>x;

    cout<<"Ingrese solo "<<x<<"numbers: "<<endl;

    for(y=0;y<x;y++){
        cin>>rev[y];
    }

    cout<<"Los numeros reversos son: \n"<<endl;
    for(y=x-1;y>=0;y--){
        cout<<rev[y]<<endl;
    }
    return 0;
}
