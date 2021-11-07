#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char str[50];
    int x, len, flag=0;

    cout<<"Verificar si la cadena es palindromo\n"<<endl;

    cout<<"Ingrese una cadena: "<<endl;
    cin>>str;

    len=strlen(str);

    for(x=0;x<len;x++){
        if(str[x]!=str[len-x-1]){
            flag=1;
            break;
        }
    }
    if(flag){
        cout<<str<<" no es palindrome!"<<endl;
    }else{
        cout<<str<<" es palindrome!"<<endl;
    }

    return 0;
}
