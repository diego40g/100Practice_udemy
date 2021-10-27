#include <iostream>

using namespace std;

int main(){
    int principal_amount;
    float rate, period, simple_interest;

    cout<<"Interes Simple\n"<<endl;
    cout<<"Ingresa el monto principal: "<<endl;
    cin>>principal_amount;

    cout<<"Ingrese el indice: "<<endl;
    cin>>rate;

    cout<<"Ingrese el periodo: "<<endl;
    cin>>period;

    simple_interest = (principal_amount*rate*period)/100;

    cout<<"\n El resultado del interes simple ="<<simple_interest<<endl;

    return 0;
}
