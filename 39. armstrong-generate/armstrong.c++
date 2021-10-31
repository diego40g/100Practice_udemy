#include <iostream>

using namespace std;

int main(){
    int rem, x;
    long y=0,z=0,temp;
    cout<<"Generar numeros Armstrong\n"<<endl;

    cout<<"Ingrese el total de numeros a generar: "<<endl;
    cin>>y;

    cout<<"La lista de numeros"<<endl;
    for(x=1;x<=y;x++){
        temp=x;
        while(temp!=0){
            rem=temp%10;
            z=z+rem*rem*rem;
            temp=temp/10;
        }
        if(x==z){
            cout<<x<<endl;
        }
        z=0;
    }
    return 0;
}
