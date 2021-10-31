#include <iostream>

using namespace std;

int main(){
    int x, cnt=0;

    cout<<"Verificar numero primario\n"<<endl;

    cout<<"Ingrese solo numeros: "<<endl;
    cin>>x;

    for(int y=1;y<=x;y++){
        if(x%y == 0){
            cnt++;
        }
    }

    if(cnt==2){
        cout<<"Este numero es Primo"<<endl;
    }else{
        cout<<"Este numero no es Primo"<<endl;
    }

    return 0;
}
