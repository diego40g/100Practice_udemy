#include <iostream>

using namespace std;

int main(){
    char str[200];
    int x,vol=0,con=0,dig=0,spa=0;

    cout<<"Numero de vocales, consonantes, digitos y espacios\n"<<endl;

    cout<<"Ingrese alguna cadena: "<<endl;
    cin.getline(str,1000);

    for(x=0;str[x]!='\0';++x){
        if(str[x]=='a'||str[x]=='A'||str[x]=='e'||str[x]=='E'
            ||str[x]=='i'||str[x]=='I'||str[x]=='o'||str[x]=='O'
            ||str[x]=='u'||str[x]=='U'){
                ++vol;
        }else if(str[x]>='a'&&str[x]<='z'||str[x]>='A'&&str[x]<='Z'){
            ++con;
        }else if(str[x]>='0'&&con<='9'){
            ++dig;
        }else if(str[x]==' '){
            ++spa;
        }
    }

    cout<<"\nNumero de vocales = "<<vol<<endl;
    cout<<"\nNumero de consonantes = "<<con<<endl;
    cout<<"\nNumero de digitos = "<<dig<<endl;
    cout<<"\nNumero de espacio = "<<spa<<endl;
}
