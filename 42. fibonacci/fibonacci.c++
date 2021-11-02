#include <iostream>

using namespace std;

int main(){
    int x,y,z=0,n=1;
    cout<<"Serie de Fibonacci\n"<<endl;

    cout<<"Elija el numero total de las series: "<<endl;
    cin>>x;

    cout<<"El resultado de la serie es = "<<endl;

    for(int a=0;z<x;a++){
        if(a<=1){
            y=a;
        }else{
            y=z+n;
            z=n;
            n=y;
        }
        cout<<y<<endl;
    }
    return 0;
}
