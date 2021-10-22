#include <iostream>

using namespace std;

int main(){
    int x, y;
    x=80;
    y=52;
    cout<<"If dentro de otro if \n"<<endl;

    if(x==80){
        cout<<"Cumple con la primera condicion"<<endl;
        if(y==52){
            cout<<"Segunda condicion If"<<endl;
        }
    }
    return 0;
}