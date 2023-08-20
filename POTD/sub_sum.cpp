//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


// #define fori for(int i=0; i<=arr.size()-1; i++)
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        long long answer=0;
        vector<int> r;
        for(int i=0; i<=arr.size()-1; i++){
            int j=i+1;
            while(answer!=s){
                answer=arr[i];
                r.push_back(i);
                if(arr[i]+arr[j]<s){
                    j++;
                    answer+=arr[j];
                }else if(arr[i]+arr[j]+answer > s){
                    answer=0;
                    r.clear();
                    break;
                }
            }
            r.push_back(j);
            if(answer==s){
                return r;
            }
        }
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends