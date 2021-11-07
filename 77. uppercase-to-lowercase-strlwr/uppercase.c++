#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char str[100];
    cout<<"Mayusculas a minusculas strlwr\n"<<endl;

    cout<<"Ingrese oracion en mayusculas: "<<endl;
    cin>>str;

    strlwr(str);

    cout<<"El resultado de la conversion es = "<<str<<endl;

    return 0;
}
