#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    int n=1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
        
    }
    
}