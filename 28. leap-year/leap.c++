#include <iostream>

using namespace std;

int main(){
    int yr;
    cout<<"Programa para detectar a�o biciesto\n"<<endl;

    cout<<"Ingrese cual quiere a�o: "<<endl;
    cin>>yr;

    if(yr%4==0){
        cout<<yr<<" es a�o Biciesto!"<<endl;
    }else{
        cout<<yr<<" no es a�o Biciesto!"<<endl;
    }

    return 0;
}
