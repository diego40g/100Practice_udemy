#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int x,y,maxi,ran;
    cout<<"Generador de numeros randomicos\n"<<endl;

    cout<<"Elija el total de numero a generar: "<<endl;
    cin>>x;

    cout<<"Elija el maximo valor: "<<endl;
    cin>>maxi;

    cout<<"El resultado de los numeros randomicos es: "<<endl;

    for(y=0;y<=x;y++){
        ran=rand()%maxi;
        cout<<ran<<endl;
    }
    return 0;
}
