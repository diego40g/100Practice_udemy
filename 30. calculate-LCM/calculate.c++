#include <iostream>

using namespace std;

int main(){
    int x, y, maxi;

    cout<<"Calculo de LCM\n"<<endl;

    cout<<"Ingrese el primero numero: "<<endl;
    cin>>x;

    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>y;

    maxi = (x>y)?x:y;

    while(true){
        if(maxi%x == 0 &&  maxi%y == 0){
            cout<<"El LCM de "<<x<<" y "<<y<<" = "<<maxi<<endl;
            break;
        }else{
            maxi++;
        }
    }

    return 0;
}
