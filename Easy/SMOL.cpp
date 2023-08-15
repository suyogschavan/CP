#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k; 
        cin>>n>>k;

        if(n-k==0){
            cout<<0<<endl;
            // break;
        }else{
        while(n>k){
            n = n-k;
        }
        cout<<n<<endl;
        }

    }
}