#include <iostream>

using namespace std;

int main(){
    int x,y,row,col,mat1[100][100],mat2[100][100],sub[200][200];
    cout<<"Resta de matrices\n"<<endl;

    cout<<"Ingrese total de filas: "<<endl;
    cin>>x;

    cout<<"Ingrese total de columas: "<<endl;
    cin>>y;

    cout<<"Ingrese elementos de la primer matriz: "<<endl;
    for(row=0;row<x;row++){
        for(col=0;col<y;col++){
            cin>>mat1[row][col];
        }
    }

    cout<<"Ingrese elementos de la segunda matriz: "<<endl;
    for(row=0;row<x;row++){
        for(col=0;col<y;col++){
            cin>>mat2[row][col];
        }
    }

    for(row=0;row<x;row++){
        for(col=0;col<y;col++){
            sub[row][col]=mat1[row][col]-mat2[row][col];
        }
    }

    cout<<"El resultado de la resta de las dos matrices es: "<<endl;
    for(row=0;row<x;row++){
        for(col=0;col<y;col++){
            cout<<sub[row][col]<<endl;
        }
    }

    return 0;
}
