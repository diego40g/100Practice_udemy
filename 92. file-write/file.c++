#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
    char data[500], ch;
    cout<<"Almacenamiento estatico\n"<<endl;

    ofstream fout("E:/PracticasProgramacion/c++/100Practice_udemy/92. file-write/text.txt",ios::out);

    cout<<"Ingrese texto a almacenar en en archivo"<<endl;
    for(int x=0;x<4;x++){
        cin.get(data,500);
        cin.get(ch);
        fout<<data<<endl;
    }

    fout.close();

    return 0;
}
