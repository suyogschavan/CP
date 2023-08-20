#include <iostream>
using namespace std;

int main()
{
    int row;
    cin >> row;

    char z = 'A';
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            char a = 'A'+i+j;
            cout<<a<<" ";
        }
        cout<<endl;
    }
}