#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char str1[100], str2[100];
    cout<<"Concatenar string con strcar\n"<<endl;

    cout<<"Ingrese el primer string: "<<endl;
    cin>>str1;

    cout<<"Ingrese el segundo string: "<<endl;
    cin>>str2;

    strcat(str1,str2);

    cout<<"Concatenacion exitosa... "<<str1<<endl;

    return 0;
}
