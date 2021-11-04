#include <iostream>

using namespace std;

int main(){
    int amt[200],mini,len,pos=1;

    cout<<"Elemento minimo del arreglo\n"<<endl;

    cout<<"Elioje el rando del arreglo: "<<endl;
    cin>>len;

    cout<<"Ingrese un total de "<<len<<" numeros en el arreglo: "<<endl;

    for(int x=0;x<len;x++){
        cin>>amt[x];
    }

    mini=amt[0];

    for(int x=1;x<len;x++){
        if(amt[x]<mini){
            mini=amt[x];
            pos=x+1;
        }
    }

    cout<<"El elemento minimo en la posicion "<<pos<<" y su valor es "<<mini<<endl;
}
