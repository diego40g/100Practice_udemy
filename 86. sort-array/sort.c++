#include<iostream>

using namespace std;

void sort_bubble(int amt[], int n);

int main(){
    int amt[200],n,x,sw;

    cout<<"Metodo burbuja para ordenar arreglo\n"<<endl;

    cout<<"Ingrese rango del arreglo: "<<endl;
    cin>>n;

    cout<<"Ingrese elementoos del arreglo: "<<endl;
    for(x=0;x<n;x++){
        cin>>amt[x];
    }

    sort_bubble(amt,n);

    cout<<"El arreglo ordenado es "<<endl;
    for(x=0;x<n;x++){
        cout<<amt[x]<<endl;
    }

    return 0;
}

void sort_bubble(int amt[],int n){
    int x;

    for(int y=0;y<(n-1);y++){
        for(int z=0;z<n-y-1;z++){
            if(amt[z]>amt[z+1]){
                x=amt[z];
                amt[z]=amt[z+1];
                amt[z+1]=x;
            }
        }
    }
}
