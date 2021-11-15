#include <iostream>

using namespace std;

void show(char='A', int=20);

int main(){
    cout<<"Paso por defecto de argumetos de funciones\n"<<endl;

    cout<<"El argumento no es pasado aqui: "<<endl;
    show();

    cout<<"El argumento es pasado aqui: "<<endl;
    show('B');

    cout<<"El argumento es pasado aqui: "<<endl;
    show('C',10);

    return 0;
}

void show(char ch, int x){
    for(int y=1;y<=x;++y){
        cout<<y<<" .-"<<ch<<endl;
    }
    cout<<endl;
}
