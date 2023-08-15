#include<iostream>
#include<array>
using namespace std;

int main(){
    int t; 
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // int result[n];
        // array<int,n> result;
        int s=0;
        for(int i=0; i<=n; i++){
            // result[i]=i+1;
            s+=i;
        }
        // if(result.size()%2!=0)
        if(s%2!=0){
            cout<<n-1<<endl;
        }else{cout<<n<<endl;}
    }
}