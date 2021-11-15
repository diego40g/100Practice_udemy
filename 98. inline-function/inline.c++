#include<iostream>
using namespace std;

inline int addition(int a,int b){
    int c=a+b;
    return (c);
}

inline int substract(int a,int b){
    int c=a-b;
    return (c);
}

int main(){
    cout<<"Funcion inline\n"<<endl;

    cout<<"La suma de numeros es = "<<addition(13,9)<<endl;

    cout<<"La resta de numeros es = "<<substract(4,6)<<endl;

    return 0;
}
