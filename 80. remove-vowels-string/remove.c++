#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char str[200];
    int len,x,y;
    cout<<"Borrar vocales en cadenas\n"<<endl;

    cout<<"Ingrese cadena: "<<endl;
    cin>>str;

    len=strlen(str);

    for(x=0;x<len;x++){
        if(str[x]=='a'||str[x]=='A'||str[x]=='e'||str[x]=='E'
            || str[x]=='i'||str[x]=='I'||str[x]=='o'||str[x]=='O'
            || str[x]=='u'||str[x]=='U'){
            for(y=x;y<len;y++){
                str[y]=str[y+1];
            }
            len--;
        }
    }

    cout<<"String despues de borrar todas las vocales = "<<str<<endl;
    return 0;
}
