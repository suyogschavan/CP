#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int iter = 1;
    for (int i = 0; i < n; i++)
    {
        // space1 = n-i;
        int space = n-i;
        while (space)
        {
            cout<<" ";
            space--;
        }

        // int num = i+iter;
        int num = i+1;
        int numbers = 1;
        while (num)
        {
            cout<<numbers;
            num--;
            numbers++;
        }
        numbers=i;
        int notI=i;
        while(notI){
            cout<<numbers;
            notI--;
            numbers--;
        }

        cout<<endl;
        iter++;
        // nums = i+(10)
    }
    
}