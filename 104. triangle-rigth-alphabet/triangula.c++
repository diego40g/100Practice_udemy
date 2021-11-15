#include <iostream>

using namespace std;

int main(){
    char ch,data='A';
    cout<<"Triangula izquierdo con letras\n"<<endl;

    cout<<"Ingrese una letra mayuscula: "<<endl;
    cin>>ch;

    for(int x=1;x<=(ch-'A'+1);++x){
        for(int y=1;y<=x;++y){
            cout<<data<<' ';
        }
        ++data;

        cout<<endl;
    }
    return 0;
}
