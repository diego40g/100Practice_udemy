#include <iostream>

using namespace std;

int main(){
    int n, amt[200],x,y,z;
    cout<<"Ordenar arreglo insertado\n"<<endl;

    cout<<"Elije el rango del arreglo: "<<endl;
    cin>>n;

    cout<<"Ingrese elementos del arreglo: "<<endl;
    for(x=0;x<n;x++){
        cin>>amt[x];
    }

    for(x=1;x<=n-1;x++){
        y=x;
        while(y>0&&amt[y]<amt[y-1]){
            z=amt[y];
            amt[y]=amt[y-1];
            amt[y-1]=z;
            y--;
        }
    }

    cout<<"El arreglo ordenado es: "<<endl;
    for(x=0;x<=n-1;x++){
        cout<<amt[x]<<endl;
    }

    return 0;
}
