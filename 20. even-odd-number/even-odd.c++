#include <iostream>

using namespace std;

int main(){
    int x;
    cout<<"Numero pares e impares"<<endl;

    cout<<"Inserte un numero: "<<endl;
    cin>>x;

    if(x%2 ==0){
        cout<<x<<" es un numero PAR"<<endl;
    }else{
        cout<<x<<" es un nuemro IMPAR"<<endl;
    }

    return 0;
}
