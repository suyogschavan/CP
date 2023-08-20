#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int number = 1;
    while(i<=n){
        int space = i-1;
        while (space)
        {
            cout<<" ";
            space--;
        }
        int nums = n-i+1;
        while (nums)
        {
            cout<<number;
            nums--;
        }
        number++;
        cout<<endl;
        i++;
    }
}