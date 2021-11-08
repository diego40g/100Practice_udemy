#include <iostream>

using namespace std;

int main(){
    int x,y,z,n,s,amt[200];
    cout<<"Buscar elemento en array\n"<<endl;

    cout<<"Ingrese rango de arreglo: "<<endl;
    cin>>n;

    cout<<"Ingrese elementos del arreglo: "<<endl;
    for(int a=0;a<n;a++){
        cin>>amt[a];
    }

    cout<<"Los elementos a encontrar es "<<endl;
    cin>>s;

    x=0;
    y=n-1;
    z=(x+y)/2;

    while(x<=y){
        if(amt[z]==s){
            cout<<s<<" localizacion "<<z+1<<endl;
            break;
        }else if(amt[z]<s){
            x=z+1;
        }else{
            y=z+1;
            z=(x+y)/2;
        }
    }

    if(x>y){
        cout<<s<<" no se a encontrado"<<endl;
    }

    return 0;
}
