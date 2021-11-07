#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char str[200];

    cout<<"Minusculas a mayusculas strupr\n"<<endl;

    cout<<"Ingrese cadena: "<<endl;
    cin>>str;

    strupr(str);

    cout<<"El resultado de la conversion es = "<<str<<endl;
    return 0;
}
