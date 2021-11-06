#include <iostream>

using namespace std;

int main(){
    int x, y, r, c, mat1[100][100], mat2[100][100],sum[200][200];
    cout<<"Sumar dos matrices\n"<<endl;

    cout<<"Ingrese numero de filas: "<<endl;
    cin>>x;

    cout<<"Ingrese el numero de columnas: "<<endl;
    cin>>y;

    cout<<"Ingrese elementos de la primera matriz: "<<endl;
    for(r=0;r<x;r++){
        for(c=0;c<y;c++){
            cin>>mat1[r][c];
        }
    }

    cout<<"Ingrese elemetos de la segunda matriz: "<<endl;
    for(r=0;r<x;r++){
        for(c=0;c<y;c++){
            cin>>mat2[r][c];
        }
    }

    for(r=0;r<x;r++){
        for(c=0;c<y;c++){
            sum[r][c]=mat1[r][c]+mat2[r][c];
        }
    }

    cout<<"El resultado de la matriz es: "<<endl;
    for(r=0; r<x; r++){
        for(c=0;c<y;c++){
            cout<<sum[r][c]<<endl;
        }
        cout<<"\n"<<endl;
    }

    return 0;
}
