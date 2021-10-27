#include <iostream>

using namespace std;

int main(){
    int x, y, z;

    cout<<"Cual es el mayor numero entre tres"<<endl;

    cout<<"Ingrese el primer numero: \n"<<endl;
    cin>>x;

    cout<<"Ingresar el segundo numero: \n"<<endl;
    cin>>y;

    cout<<"Ingresar el tercer numero: \n"<<endl;
    cin>>z;

    if(x>=y&&x>=z){
        cout<<x<<" es el numero mayor\n"<<endl;
    }

    if(y>=x&&y>=z){
        cout<<y<<" es el numero mayor\n"<<endl;
    }
    if(z>=x&&z>=y){
        cout<<z<<" es el numero mayor\n"<<endl;
    }

    return 0;
}
