#include <iostream>

using namespace std;

void merged_amt(int arr[], int x, int arr2[], int y, int total[]);

int main(){
    int x,y,a,amt1[200],amt2[200],sum[200];

    cout <<"Unir dos Arrays\n"<<endl;

    cout<<"Rango del primer arreglo: "<<endl;
    cin>>x;

    cout<<"Ingrese "<<x<<" valores: "<<endl;
    for(a=0;a<x;a++){
        cin>>amt1[a];
    }

    cout<<"Rango del segundo arreglo: "<<endl;
    cin>>y;

    cout<<"Ingrese "<<y<<" elementos: "<<endl;
    for(a=0;a<y;a++){
        cin>>amt2[a];
    }

    merged_amt(amt1,x,amt2,y,sum);

    cout<<"El resultado de unir arreglos: "<<endl;
    for(a=0;a<x+y;a++){
        cout<<sum[a]<<endl;
    }

    return 0;
}

void merged_amt(int arr1[], int x, int arr2[], int y, int total[]){
    int a,b=0,c=0;

    for(a=0;a<x+y;){
        if(b<x&&c<y){
            if(arr1[b]<arr2[c]){
                total[a]=arr1[b];
                b++;
            }else{
                total[a]=arr2[c];
                c++;
            }
            a++;
        }else if(b==x){
            for(;a<x+y;){
                total[a]=arr2[c];
                c++;
                a++;
            }
        }else {
            for(;a<x+y;){
                total[a]=arr1[b];
                b++;
                a++;
            }
        }
    }
}
