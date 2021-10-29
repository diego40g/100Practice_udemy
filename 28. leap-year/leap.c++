#include <iostream>

using namespace std;

int main(){
    int yr;
    cout<<"Programa para detectar año biciesto\n"<<endl;

    cout<<"Ingrese cual quiere año: "<<endl;
    cin>>yr;

    if(yr%4==0){
        cout<<yr<<" es año Biciesto!"<<endl;
    }else{
        cout<<yr<<" no es año Biciesto!"<<endl;
    }

    return 0;
}
