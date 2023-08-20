#include<iostream>
using namespace std;

int main(){
    int n=5;
    // cin>>n;
    for (int i = 0; i < n; i++)
    {
        // 1st triangle
        int j=n-i;
        int n1=1;
        while (j)
        {
            cout<<n1;
            j--;
            n1++;
        }

        // middle1
        j = i;
        while(j){
            cout<<"*";
            j--;
        }

        // middle2
        j=i;
        while(j){
            cout<<"*";
            j--;
        }

        // last
        j=n-i;
        int n2 = n-i;
        while(j){
            cout<<n2;
            j--;
            n2--;
        }
        cout<<endl;
    }
    
}