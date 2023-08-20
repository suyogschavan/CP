#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int spaces = i;
        while (spaces)
        {
            cout << " ";
            spaces--;
        }
        int numbers = n - i;
        int num = i + 1;
        while (numbers)
        {
            cout << num;
            numbers--;
            num++;
        }
        cout << endl;
    }
}