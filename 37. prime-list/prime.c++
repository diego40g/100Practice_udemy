#include <iostream>

using namespace std;

int list_prime(int n);

int main(){
    int x,y,z;
    cout<<"Lista de numeros primos\n"<<endl;

    cout<<"Elija hasta que numero de la lista sera primo"<<endl;
    cin>>x;

    for(y=0;y<x;y++){
        z=list_prime(y);

        if(z==1){
            cout<<y<<endl;
        }
    }
    return 0;
}

int list_prime(int n){
    int x;
    for(x=2;x<=n-1;x++){
        if(n%x==0){
            return 0;
        }
    }
    if(x==n){
        return 1;
    }
}
