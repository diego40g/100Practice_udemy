#include<iostream>

using namespace std;

int len_str(char*);

int main(){
    char str[100];
    int len;
    cout<<"Tamanio de la cadena con punteros\n"<<endl;

    cout<<"Ingrese alguna cadena: "<<endl;
    cin>>str;

    len=len_str(str);

    cout<<"El tamanio de la cadena es = "<<len<<endl;

    return 0;
}

int len_str(char*ptr){
    int cnt=0;
    while(*ptr!='\0'){
        cnt++;
        ptr++;
    }
    return cnt;
}
