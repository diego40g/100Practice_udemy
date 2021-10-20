#include <iostream>

using namespace std;

int main() {
    int x, y;

    cout << "Ingreso de usuario \n" << endl;
    cout << "Ingresar primer numero: " << endl;
    cin >> x;

    cout << "Ingresar segundo numero: " << endl;
    cin >> y;
    cout << "Se ingreso: x = "<<x<<" y: "<<y<<endl;

    cout << "Total de la suma " <<x<<"+ "<<y<<" = "<<x+y;
    return 0;
}
