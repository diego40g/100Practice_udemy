#include <iostream>

using namespace std;

int main(){
    int x, fact=1;

    cout<<"factorial\n"<<endl;

    cout<<"Ingrese algun numero: "<<endl;
    cin>>x;

    for(int y=1;y<=x;y++){
        fact=fact*y;
    }

    cout<<"El factorial del nuemro ingresado es = "<<fact<<endl;

    return 0;
}
