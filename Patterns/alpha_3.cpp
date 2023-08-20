#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char ch='A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            char c = ch+i+j;
            cout<<c<<" ";
        }
        cout<<endl;
    }
    
}