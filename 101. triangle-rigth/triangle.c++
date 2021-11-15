#include <iostream>

using namespace std;

int main(){
    int x, y,n;

    cout<<"Triangulo izquierdo\n"<<endl;

    cout<<"Ingrese un numero de columnas: "<<endl;
    cin>>n;

    for(x=1;x<=n;++x){
        for(y=1;y<=x;++y){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
