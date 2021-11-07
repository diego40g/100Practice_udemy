#include <iostream>

using namespace std;

void case_lowercase(char str[]);

int main(){
    char str[200];
    cout<<"Minusculas a mayusculas con ciclo whil\n"<<endl;

    cout<<"Ingrese minusculas: "<<endl;
    cin>>str;

    case_lowercase(str);

    cout<<"La conversion de minusculas es: "<<str<<endl;

    return 0;
}

void case_lowercase(char str[]){
    int x=0;

    while(str[x]!='\0'){
        if(str[x]>='a'&&str[x]<='z'){
            str[x]=str[x]-32;
        }
        x++;
    }
}
