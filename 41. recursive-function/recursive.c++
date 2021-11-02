#include <iostream>

using namespace std;

int fact(int n);

int main(){
    int x;
    cout<<"Factorial con funcion recursiva\n"<<endl;

    cout<<"Ingrese cualquier numero: "<<endl;
    cin>>x;

    cout<<"El resultado del factorial es "<<fact(x)<<endl;

    return 0;
}

int fact(int n){
    if(n>1){
        return n*fact(n-1);
    }else{
        return 1;
    }
}
