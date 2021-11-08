#include<iostream>

using namespace std;

int call_value(int a, int b);

int main(){
    int x, y,sum;
    cout<<"Llamar valores\n"<<endl;

    cout<<"Ingrese el primer numero: "<<endl;
    cin>>x;

    cout<<"Ingrese el segundo numero:"<<endl;
    cin>>y;

    sum=call_value(x,y);

    cout<<"La suma de "<<x<<" y "<<y<<" es: "<<sum<<endl;

    return 0;
}

int call_value(int a, int b){
    int sum;
    sum=a+b;
    return sum;
}
