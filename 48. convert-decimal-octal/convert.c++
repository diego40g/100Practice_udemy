#include <iostream>

using namespace std;

int main(){
    long x,dec,y,ba=1,oct=0;

    cout<<"Decimal a octal\n"<<endl;

    cout<<"Ingrese numero decimal: "<<endl;
    cin>>x;

    dec=x;

    while(x>0){
        y=x%8;
        oct=oct+y*ba;
        x=x/8;
        ba=ba*10;
    }

    cout<<"El numero decimal es "<<dec<<" su octal es "<<oct<<endl;

    return 0;
}
