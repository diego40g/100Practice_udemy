#include <iostream>

using namespace std;

int main(){
    long int bin,hex=0,x=1,y,z;

    cout<<"Binario a Hexadecimal\n"<<endl;

    cout<<"Ingrese un numero binario: "<<endl;
    cin>>bin;

    z=bin;

    while(bin!=0){
        y=bin%10;
        hex=hex+y*x;
        x=x*2;
        bin=bin/10;
    }
    cout<<"El binario es "<<z<<" y su equivalente hexadecimal es "<<hex<<endl;

    return 0;
}
