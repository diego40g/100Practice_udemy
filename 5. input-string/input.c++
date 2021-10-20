#include <iostream>

using namespace std;

int main () {
    char STRI[255];
    cout << "Ingreso String \n" << endl;
    cout << "Insertar alguna cadena de texto: "<<endl;
    cin.getline(STRI,10);

    cout<<"Usted ingreso el siguiente texto: "<<STRI<<endl;

    return 0;
}