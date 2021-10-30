#include <iostream>

using namespace std;

int main(){
    int x, rev=0, y;
    cout<<"Numero reverso\n"<<endl;

    cout<<"Ingrese algun numero: "<<endl;
    cin>>x;

    while(x!=0){
        y=x%10;
        rev=rev*10+y;
        x=x/10;
    }
    cout<<"El numero reverso es = "<<rev<<endl;

    return 0;
}
