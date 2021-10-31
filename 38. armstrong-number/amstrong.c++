#include <iostream>

using namespace std;

int main(){
    int x,y,z=0,temp,rem;

    cout<<"Numero Armstrong\n"<<endl;

    cout<<"Ingrse cualquier numero: "<<endl;
    cin>>x;

    temp=x;

    while(temp!=0){
        rem=temp%10;
        z=z+rem*rem*rem;
        temp=temp/10;
    }

    if(x==z){
        cout<<"Es numero Amstrong!"<<endl;
    }else{
        cout<<"No es numero Amstrong!"<<endl;
    }

    return 0;
}
