#include <iostream>

using namespace std;

int substract(int x, int y);

int main(){
    int x,y,sub;

    cout<<"Resta 2 numero mediante funcion\n"<<endl;

    cout<<"Ingresar primer numero: "<<endl;
    cin>>x;

    cout<<"Ingresar segundo numero: "<<endl;
    cin>>y;

    sub=substract(x,y);

    cout<<"La resta de "<<x<<" y "<<y<<" es = "<<sub<<endl;

    return 0;
}

substract(int x, int y){
    return x-y;
}
