#include <iostream>

using namespace std;

class Area{
    public:
        int length;
        int breadth;
};

int main(){
    Area A;
    int area;
    cout<<"Clase simple\n"<<endl;

    cout<<"Ingrese altura del rectangulo: "<<endl;
    cin>>A.length;

    cout<<"Ingrese base del rectangulo: "<<endl;
    cin>>A.breadth;

    area=A.length*A.breadth;
    cout<<"El resultado del area del rectangulo es = "<<area<<endl;

    return 0;
}
