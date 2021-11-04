#include <iostream>

using namespace std;

int main(){
    int amt[200],maxi,len,pos=1;

    cout<<"Elemento maximo del arreglo\n"<<endl;

    cout<<"Elije el rango del arregle: "<<endl;
    cin>>len;

    cout<<"Ingrese "<<len<<" Elemtos del arreglo"<<endl;
    for(int x=0;x<len;x++){
        cin>>amt[x];
    }

    maxi=amt[0];

    for(int x=1;x<len;x++){
        if(amt[x]>maxi){
            maxi=amt[x];
            pos=x++;
        }
    }
    cout<<"El maximo elemento de posicion "<<pos<<" y el valor es "<<maxi<<endl;

    return 0;
}
