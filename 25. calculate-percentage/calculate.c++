#include <iostream>

using namespace std;

int main(){
    int sum, s1, s2, s3, s4, s5, s6, s7, total=800;
    float per;

    cout<<"Calculo del porcentaje\n"<<endl;

    cout<<"Incerte 7 numeros:\n"<<endl;
    cin>>s1>>s2>>s3>>s4>>s5>>s6>>s7;

    sum=s1+s2+s3+s4+s5+s6+s7;

    cout<<"La suma de 7 numeros es = "<<sum<<endl;

    per = (sum*100)/total;

    cout<<"\n Percentage = "<<per<<endl;

    return 0;
}
