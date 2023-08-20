#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if(ch=='Z')
            return 0;
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
}