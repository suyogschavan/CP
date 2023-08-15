#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        // if()
        while(n!=0){
            if(a!=0&&b!=0){
                a--;
                b--;
                n--;
            }else if (b!=0 && c!=0)
            {
                b--;
                c--;
                n--;
            }else{
            break;
            }
        }
        if (n==0)
        {
            cout<<"YES";
        }else
        cout<<"NO";
        
        // cout<<n<<a<<b<<c;
        cout<<endl;
    }
}