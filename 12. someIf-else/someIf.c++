#include <iostream>

using namespace std;

int main(){
    int grade;
    cout<<"Algunas condicioens ifelse\n"<<endl;

    cout<<"Ingresar nota del estudiante del 1 al 100"<<endl;
    cin>>grade;

    if(grade>100){
        cout<<"Nota mayor a 100"<<endl;
    }else if (grade>=80){
        cout<<"Tu calificacion es A"<<endl;
    }else if (grade>=70){
        cout<<"Tu calificacion es B"<<endl;
    }else if (grade>=50){
        cout<<"Tu calificacion es C"<<endl;
    }else if (grade>=45){
        cout<<"Tu calificacion es D"<<endl;
    }else if (grade>=35){
        cout<<"Tu calificacion es E"<<endl;
    }else if (grade<0){
        cout<<"No se acepta numeros negativos"<<endl;
    }else {
        cout<<"Usted ya perdio la materia"<<endl;
    }

    return 0;
}
