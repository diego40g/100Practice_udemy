#include <iostream>

using namespace std;

int main(){
    int x, y;

    cout<<"Ciclo for"<<endl;

    for(x=2; x<=100; x++){
        for(y=2;y<=(x/y);y++){
            if(!(x%y)){
                break;
            }
        }
        if(y>(x/y)){
            cout<<x<<" el numero es primo"<<endl;
        }
    }

    return 0;
}
