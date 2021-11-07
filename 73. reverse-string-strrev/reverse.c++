#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char str[100];
    cout<<"Cadena reversa con strrev\n"<<endl;

    cout<<"Ingrese la string: "<<endl;
    cin>>str;

    strrev(str);

    cout<<"La cadena reversa es = "<<str<<endl;
    return 0;
}
