#include <iostream>

using namespace std;

int main(){
    int x,y,row,col,a,b,z,sum=0,mat1[20][20],mat2[20][20],mul[20][20];
    cout<<"Multiplica dos matrices\n"<<endl;

    cout<<"Ingrese el total de filas: "<<endl;
    cin>>x;

    cout<<"Ingrese el total de columnas: "<<endl;
    cin>>y;

    cout<<"Ingresa los elementos de la primera matriz: "<<endl;
    for(row=0;row<x;row++){
        for(col=0;col<y;col++){
            cin>>mat1[row][col];
        }
    }

    cout<<"Ingrese numero de filas: "<<endl;
    cin>>a;

    cout<<"Ingrese numero columna: "<<endl;
    cin>>b;

    if(y!=a){
        cout<<"El orden de la matriz no se puede multiplicar"<<endl;
    }else{
        cout<<"Ingrese los elementos de la segunda matriz: "<<endl;
        for(row=0;row<a;row++){
            for(col=0;col<b;col++){
                cin>>mat2[row][col];
            }
        }

        for(row=0;row<x;row++){
            for(col=0;col<b;col++){
                for(z=0;z<a;z++){
                    sum=sum+mat1[row][z]*mat2[z][col];
                }
                mul[row][col]=sum;
                sum=0;
            }
        }
    }
    cout<<"Resultado de la multiplicacion es: "<<endl;

    for(row=0;row<x;row++){
        for(col=0;col<b;col++){
            cout<<mul[row][col]<<endl;
        }
        cout<<"\n"<<endl;
    }

    return 0;
}
