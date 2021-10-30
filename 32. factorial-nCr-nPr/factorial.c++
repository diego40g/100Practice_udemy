#include <iostream>

using namespace std;

long fact_ncr(int n, int r);
long fact_npr(int n, int r);
long factorial(int n);

int main(){
    int n,r;
    long ncr, npr;
    cout<<"Factorial nCr y nPr"<<endl;

    cout<<"Ingrese el valor de n: "<<endl;
    cin>>n;

    cout<<"Ingrese el valor de r: "<<endl;
    cin>>r;

    ncr=fact_ncr(n,r);
    npr=fact_npr(n,r);

    cout<<n<<"C"<<r<<" = "<<ncr<<endl;
    cout<<n<<"P"<<r<<" = "<<npr<<endl;
    return 0;
}

long fact_ncr(int n, int r){
    long result;
    result = factorial(n)/(factorial(r)*factorial(n-r));

    return result;
}
long fact_npr(int n, int r){
    long result;
    result=factorial(n)/factorial(n-r);

    return result;
}
long factorial(int n){
    int x;
    long result = 1;
    for(x=1;x<=n;x++){
        result=result*x;
    }
    return result;
}
