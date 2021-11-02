#include <iostream>

using namespace std;

int Fibonacci(int x);

int main(){
    int x=0,y;

    cout<<"Serie fibonacci recursiva\n"<<endl;

    cout<<"Ingrtese un numero para la serie: "<<endl;
    cin>>y;

    cout<<"El resultado de la serie es: "<<endl;
    for(int z=1;z<=y;z++){
        cout<<Fibonacci(x)<<endl;
        x++;
    }
    return 0;
}

int Fibonacci(int x){
    if(x==0){
        return 0;
    }else if(x==1){
        return 1;
    }else{
        return (Fibonacci(x-1)+Fibonacci(x-2));
    }
}
