#include <iostream>

using namespace std;

int main(){
    int x = 8, y = 70;
    cout<<"Aplicando funcion switch recusivo\n"<<endl;

    switch(x){
        case 8:
            cout<<"Primera condicion del primer switch";

            switch(y){
                case 70:
                    cout<<"Primera condicion del segundo switch"<<endl;
                default:
                    cout<<"No coincide ningun caso del segundo switch"<<endl;
            }
        default:
            cout<<"No coincide ningun caso del primer switch"<<endl;
    }

    return 0;
}
