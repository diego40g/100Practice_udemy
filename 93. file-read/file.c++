#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
    char data[500],ch;

    cout<<"Leyendo archivo..."<<endl;

    ifstream fin("E:/PracticasProgramacion/c++/100Practice_udemy/93. file-read/text.txt",ios::in);
    fin.seekg(0);

    cout<<"\n"<<endl;
    for(int x=0;x<4;x++){
        fin.get(data,500);
        fin.get(ch);
        cout<<data<<"\n"<<endl;
    }

    fin.close();

    return 0;
}
