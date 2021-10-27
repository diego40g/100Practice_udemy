#include <iostream>

using namespace std;

int main(){
    int basic, x, y, gro_sa;

    cout<<"Salario\n"<<endl;

    cout<<"Ingrese el salario basico: "<<endl;
    cin>>basic;

    x=(10*basic)/100;
    y=(12*basic)/100;

    gro_sa=basic+x+y;

    cout<<"Su salario es = "<<gro_sa<<endl;

    return 0;
}
