#include <iostream>

using namespace std;

int main(){
    int amt[200],n,x,y,pos,z;

    cout<<"Ordenar elemento de arreglos\n"<<endl;

    cout<<"Ingrese rango de arreglo: "<<endl;
    cin>>n;

    cout<<"Ingrese elementos del arreglo: "<<endl;
    for(x=0;x<n;x++){
        cin>>amt[x];
    }

    for(x=0;x<(n-1);x++){
        pos=x;
        for(y=x+1;y<n;y++){
            if(amt[pos]>amt[y]){
                pos=y;
            }
        }
        if(pos!=x){
            z=amt[x];
            amt[x]=amt[pos];
            amt[pos]=z;
        }
    }

    cout<<"El resultado del arreglo es = "<<endl;
    for(x=0;x<n;x++){
        cout<<amt[x]<<endl;
    }

    return 0;
}
