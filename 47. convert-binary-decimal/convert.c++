#include <iostream>

using namespace std;

int main(){
    int bin,dec=0,x=1,y,z;

    cout<<"Binario a Decimal\n"<<endl;

    cout<<"Ingrese solo numero: "<<endl;
    cin>>bin;

    z=bin;

    while(bin!=0){
        y=bin%10;
        dec=dec+y*x;
        bin=bin/10;

        x=x*2;
    }

    cout<<"El numero bionario es "<<z<<" y su equivalente decimal es "<<dec<<endl;

    return 0;
}
