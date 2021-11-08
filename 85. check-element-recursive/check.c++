#include<iostream>

using namespace std;

int arr_search(int amt[], int x, int y, int a, int b);

int main(){
    int amt[50],x,y,z,output,a,b;

    cout<<"Busqueda recursiva dentro del arreglo\n"<<endl;

    cout<<"Ingrese el rango de elementos: "<<endl;
    cin>>x;

    cout<<"Ingrese elementos del arreglo: "<<endl;
    for(y=0;y<x;y++){
        cin>>amt[y];
    }

    cout<<"Ingrese el elemento a buscar: "<<endl;
    cin>>z;

    a=0;b=x-1;

    output=arr_search(amt,x,z,a,b);

    if(output==0){
        cout<<"El numero se encontro"<<endl;
    }else{
        cout<<"El numero no se encontro"<<endl;
    }

    return 0;
}

int arr_search(int amt[],int x,int y,int a,int b){
    int z,output=0;
    if(a<=b){
        z=(a+b)/2;
        if(y==amt[z]){
            output=1;
        }else if(y<amt[z]){
            return arr_search(amt,x,y,a,z-1);
        }else{
            return arr_search(amt,x,y,z+1,b);
        }
    }else{
        return output;
    }
}
