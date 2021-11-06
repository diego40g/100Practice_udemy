#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char STR[100];
    int len;

    cout<<"Tamanio del string con funcion\n"<<endl;

    cout<<"Ingrese cualquier string: "<<endl;
    cin>>STR;

    len=strlen(STR);

    cout<<"El tamanio del string es: "<<len<<endl;

    return 0;
}
