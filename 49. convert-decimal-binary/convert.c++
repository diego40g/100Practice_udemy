#include <iostream>

using namespace std;

int main(){
    long x,dec,y,ba=1,bin=0;

    cout<<"Decimal a Binario\n"<<endl;

    cout<<"Ingrese numero decimal: "<<endl;
    cin>>x;

    dec=x;

    while(x>0){
        y=x%2;

        bin=bin+y*ba;
        x=x/2;
        ba=ba*10;
    }

    cout<<"El decimal es "<<dec<<" el binario "<<bin<<endl;

    return 0;
}
