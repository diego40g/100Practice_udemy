#include <iostream>

using namespace std;

int main(){
    char ch;
    cout<<"Verificar vocales y consonantes\n"<<endl;

    cout<<"Ingrese caracter: "<<endl;
    cin>>ch;

    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'
        ||ch=='i'||ch=='I'||ch=='o'||ch=='O'
        ||ch=='u'||ch=='U'){
            cout<<"El caracter "<<ch<<" es una vocal."<<endl;
    }else{
        cout<<"El caracter "<<ch<<" es consonante."<<endl;
    }
    return 0;
}
