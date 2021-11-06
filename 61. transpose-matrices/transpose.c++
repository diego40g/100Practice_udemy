#include <iostream>

using namespace std;

int main(){
    int x,y,row,col,mat[100][100],trans[100][100];

    cout<<"Matriz transpuesta\n"<<endl;

    cout<<"Ingrese numero de filas: "<<endl;
    cin>>x;

    cout<<"Ingrese numero de columnas: "<<endl;
    cin>>y;

    cout<<"Ingrese los elementos de la matriz: "<<endl;
    for(row=0;row<x;row++){
        for(col=0;col<y;col++){
            cin>>mat[row][col];
        }
    }

    for(row=0;row<x;row++){
        for(col=0;col<y;col++){
            trans[row][col]=mat[row][col];
        }
    }

    cout<<"El resultado de la transpuesta es: "<<endl;
    for(row=0;row<y;row++){
        for(col=0;col<x;col++){
            cout<<trans[row][col]<<endl;
        }
        cout<<"\n"<<endl;
    }

    return 0;
}
