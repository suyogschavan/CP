#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    if(ch>96 && ch<123){
        cout<<"lower case"<<endl;
    }else if(ch>64 && ch<91){
        cout<<"Upper case"<<endl;
    }else if(ch>47&&ch<58){
        cout<<"Numeric"<<endl;
    }else{
        cout<<"Symbol"<<endl;
    }
}