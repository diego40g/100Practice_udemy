#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char str[100],rev;
    int x,y=0;
    cout<<"Reverso de string con ciclo while\n";

    cout<<"Ingrese un string: "<<endl;
    cin>>str;

    x=0;
    y=strlen(str)-1;

    while(x<y){
        rev=str[x];
        str[x]=str[y];
        str[y]=rev;
        x++;
        y--;
    }

    cout<<"La cadena reversa es = "<<str<<endl;

    return 0;
}
