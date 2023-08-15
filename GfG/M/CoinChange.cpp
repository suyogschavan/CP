//{ Driver Code Starts
#include <bits/stdc++.h>
#include<array>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int count(int coins[], int N, int sum) {

        // code here.
        int result;
        array<int> c = int(coins);
        int size = sizeof(c)/sizeof(c[0]);
        // int i = 0;
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                if(c[i]+c[j]==sum){
                   result++; 
                }
            }
        }
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends