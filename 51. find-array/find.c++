#include <iostream>

using namespace std;

int main(){
    int x,n,Arr[100];
    cout<<"Detectar el primer y ultimo valor del arreglo\n"<<endl;

    cout<<"Seleccione un rango del arreglo: "<<endl;
    cin>>n;

    cout<<"Ingrese un total de "<<n<<" numeros"<<endl;
    for(x=0;x<n;++x){
        cin>>Arr[x];
    }

    cout<<"El primer numero es "<<Arr[0]<<" el ultimo numero es "<<Arr[n-1]<<endl;

    return 0;
}
