#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char str[200],ch;
    int x,cnt=0;

    cout<<"Frecuencia de caracteres en oracion\n"<<endl;

    cout<<"Ingrese alguna cadena: "<<endl;
    cin.getline(str,1000);

    cout<<"Elija el caracter a contar: "<<endl;
    cin>>ch;

    for(x=0;str[x]!='\0';++x){
        if(ch==str[x]){
            ++cnt;
        }
    }

    cout<<"La cantidad de veces repetido es = "<<cnt<<endl;

    return 0;
}
