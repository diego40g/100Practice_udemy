#include <iostream>

using namespace std;

void case_lower(char str[]);

int main(){
    char str[200];
    cout<<"Mayusculas a minusculas con ciclo with\n"<<endl;

    cout<<"Ingrese oracion en mayusculas: "<<endl;
    cin>>str;

    case_lower(str);

    cout<<"El resultado de la convercion es:  "<<str<<endl;
    return 0;
}

void case_lower(char str[]){
    int x=0;
    while(str[x]!='\0'){
        if(str[x]>='A'&&str[x]<='Z'){
            str[x]=str[x]+32;
        }
        x++;
    }
}
