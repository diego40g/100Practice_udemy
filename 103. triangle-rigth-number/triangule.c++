#include<iostream>

using namespace std;

int main(){
    int x,y,n;

    cout<<"Triangulo izquierdo numerico\n"<<endl;

    cout<<"Ingrese el numerop de filas: "<<endl;
    cin>>n;

    for(x=1;x<=n;++x){
        for(y=1;y<=x;++y){
            cout<<y<<" ";
        }
        cout<<endl;
    }

    return 0;
}
