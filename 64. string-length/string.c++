#include <iostream>

using namespace std;

int main(){
    int x, cnt=0;
    char STR[20];

    cout<<"Loop para el largo de cadena\n"<<endl;

    cout<<"Ingrese cualquiere caractere: "<<endl;
    cin>>STR;

    for(x=0;STR[x]!='\0';x++){
        cnt++;
    }

    cout<<"El tamanio de la cadena es: "<<cnt<<endl;
    return 0;
}
