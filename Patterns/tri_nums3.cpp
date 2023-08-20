#include <iostream>
using namespace std;
// i+j+1
int main()
{
    int row;
    cin >> row;
    // int n=1;
    for (int i = 0; i < row; i++)
    {
        // int n = i;
        for (int j = 0; j < i; j++)
        {
            // cout << n << " ";
            cout<<i+j+1<<" ";
            // n++;
        }
        cout << endl;
        // n++;
    }
}