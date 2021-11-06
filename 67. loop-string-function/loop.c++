#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char str1[200], str2[100];
    cout<<"Comparacion de string funccion\n"<<endl;

    cout<<"Ingrese el primer string: "<<endl;
    cin>>str1;

    cout<<"Ingrese el segundo string: "<<endl;
    cin>>str2;

    if(strcmp(str1,str2)==0){
        cout<<"Los string son iguales!!!"<<endl;
    }else{
        cout<<"Los string son diferentes!!!"<<endl;
    }
    return 0;
}
