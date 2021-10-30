#include <iostream>

using namespace std;

int main(){
    int x,y,pal,rev=0;

    cout<<"Verificar si es Palindrome\n"<<endl;

    cout<<"Ingrese solo posibles numeros: "<<endl;
    cin>>x;

    y=x;

    while(x!=0){
        pal=x%10;
        rev=(rev*10)+pal;
        x=x/10;
    }

    if(y==rev){
        cout<<"El numero ingresado es Palindrome!!!"<<endl;
    }else{
        cout<<"El numero ingresado NO es Palindrome!!!"<<endl;
    }

    return 0;
}
