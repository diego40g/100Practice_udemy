#include <iostream>

using namespace std;

long HCFLCM(long x, long y);

int main(){
    long x,y,HCF,LCM;

    cout<< "Calculo de HCF y LCM\n"<<endl;

    cout<<"Ingrese el primer numero: "<<endl;
    cin>>x;

    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>y;

    HCF = HCFLCM(x,y);

    LCM = (x*y)/HCF;

    cout<<"El HCF de "<<x<<" y "<<y<<" es "<<HCF<<endl;

    cout<<"\nEl LCM de "<<x<<" y "<<y<<" es "<<LCM<<endl;

    return 0;
}

long HCFLCM(long x, long y){
    if(x==0){
        return y;
    }
    do{
        if(x>y){
            x=x-y;
        }else{
            y=y-x;
        }
    }while(y!=0);
    return x;
}
