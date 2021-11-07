#include<iostream>
#include<string.h>

using namespace std;

void rev_sentence(const string&str);

int main(){
    string str;

    cout<<"How to reverse a sentence\n"<<endl;

    cout<<"Ingrese oracion: "<<endl;
    getline(cin,str);

    rev_sentence(str);

    return 0;
}

void rev_sentence(const string&str){
    size_t n=str.size();
    if(n==1){
        cout<<str<<endl;
    }else{
        cout<<str[n-1];
        string rev_str=str.substr(0,n-1);

        rev_sentence(rev_str);
    }
}
