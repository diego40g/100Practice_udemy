#include <iostream>

using namespace std;

int main(){
    int x,y,z,amtl[200],amt2[200];

    cout<<"Elementos reverso del arreglo\n"<<endl;

    cout<<"Elija el rando del elemento: "<<endl;
    cin>>x;

    cout<<"Ingrese "<<x<<" elementos del arreglo: "<<endl;
    for(y=0;y<x;y++){
        cin>>amtl[y];
    }

    for(y=y-1,z=0; y>=0; y--,z++){
        amt2[z]=amtl[y];
    }

    for(y=0;y<x;y++){
        amtl[y]=amt2[y];
    }

    cout<<"Los elementos inversos del arreglo son: "<<endl;

    for(y=0;y<x;y++){
        cout<<amtl[y]<<endl;
    }

    return 0;
}
