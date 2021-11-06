#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char str1[100], str2[100];
    cout<<"Copiar string strcpy\n"<<endl;

    cout<<"Ingrese alguna string: "<<endl;
    cin>>str1;

    strcpy(str2,str1);

    cout<<"String copiado exitosamente... "<<str2<<endl;
    return 0;
}
