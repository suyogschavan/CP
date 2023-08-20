#include<iostream>
using namespace std;

int main(){
    int n;
    n=5;
    int iter=1;
    for (int i = 0; i < n; i++)
    {
        // for first spaces
        int spaces = n-i;
        while (spaces)
        {
            cout<<" ";
            spaces--;
        }
        
        // for star
        int star = i+iter;
        while (star)
        {
            cout<<"*";
            star--;
        }
        iter++;
        cout<<endl;
    }

    iter = n+1;
    for (int i = 0; i <= n; i++)
    {
        int spaces = i;
        while (spaces)
        {
            cout<<" ";
            spaces--;
        }
        
        // star
        int star = (n-i)+iter;
        while (star)
        {
            cout<<"*";
            star--;
        }
        iter--;
        cout<<endl;
    }
        
}