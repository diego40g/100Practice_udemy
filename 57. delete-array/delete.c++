#include <iostream>

using namespace std;

int main(){
    int x, y, amt[200], pos;

    cout<<"Eliminar elemento del arreglo \n"<<endl;

    cout<<"Elejir rango de elementos"<<endl;
    cin>>x;

    cout<<"Ingrese "<<x<<" elementos al arreglo"<<endl;
    for(y=0;y<x;y++){
        cin>>amt[y];
    }

    cout<<"Posicion de elementos a eliminar: "<<endl;
    cin>>pos;

    if(pos>=x+1){
        cout<<"La operacion no es posible..."<<endl;
    }else{
        for(y=pos-1;y<x-1;y++){
            amt[y]=amt[y+1];
        }
    }

    cout<<"El resultado del arreglo antes de eliminar es: "<<endl;
    for(y=0;y<x-1;y++){
        cout<<amt[y]<<endl;
    }

    return 0;
}
