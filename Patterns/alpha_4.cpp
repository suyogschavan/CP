#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char ch = 'A';
    for (int i = 0; i <= n; i++)
    {
        char c= ch+n-i;
        for (int j = 0; j <= i; j++)
        {
            cout<<c<<" ";
            c=c+1;
        }
        cout<<endl;
    }
}