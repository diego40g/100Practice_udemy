#include <iostream>

using namespace std;

int main(){
    int x,y,z,a;

    cout<<"Decimal a  Bitwise\n"<<endl;

    cout<<"Ingrese numero decimal: "<<endl;
    cin>>x;

    a=x;

    cout<<"Binmario igual a "<<a<<endl;
    for(y=31;y>=0;y--){
        z=x>>y;
        if(y&1){
            cout<<"1"<<endl;
        }else{
            cout<<"0"<<endl;
        }
    }

    return 0;
}
