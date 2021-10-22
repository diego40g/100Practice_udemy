#include <iostream>

using namespace std;

int main() {
    char grade;
    cout<<"Funcion Switch\n"<<endl;

    cout<<"Porfavor solo ingrese su nota entre A-F"<<endl;
    std::cin >> grade;

    switch(grade){
        case 'A':
            cout<<"Excelente Resultado"<<endl;
            break;
        case 'B':
            cout<<"Muy Buen Resultado"<<endl;
            break;
        case 'C':
            cout<<"Buen Resultado"<<endl;
            break;
        case 'D':
            cout<<"Resultado Normal"<<endl;
            break;
        case 'E':
            cout<<"Pasado"<<endl;
            break;
        case 'F':
            cout<<"Resultado Fallido"<<endl;
            break;
        default:
            cout<<"Dato ingresado incorrecto"<<endl;
    }

    return 0;
}
