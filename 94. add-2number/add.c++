#include <iostream>

using namespace std;

int addition(int x, int y);

int main(){
    int x,y,sum;

    cout<<"Sumar 2 numero mediante fucnion\n"<<endl;

    cout<<"Ingresar primer numero: "<<endl;
    cin>>x;

    cout<<"Ingresar segundo numero: "<<endl;
    cin>>y;

    sum=addition(x,y);

    cout<<"La suma de "<<x<<" y "<<y<<" es = "<<sum<<endl;

    return 0;
}

addition(int x, int y){
    return x+y;
}
