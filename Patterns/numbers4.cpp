#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        int space = n-i+1;
        while(space){
            cout<<" ";
            space--;
        }
        int number = i+1;
        while(number){
            cout<<num;
            number--;
        }
        num++;
        cout<<endl;
    }
    
}
/*

        1
       22
      333
     4444

*/