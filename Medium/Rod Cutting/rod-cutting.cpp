//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  int f(int i,int price[],int n,int len,vector<vector<int> > &dp) {
      if(i==n) return 0;
      if(dp[i][len] != -1) return dp[i][len];
      int cut = price[len]+f(i+1,price,n,0,dp);
      int notcut = f(i+1,price,n,len+1,dp);
      
      return dp[i][len]=max(cut,notcut);
  }
    int cutRod(int price[], int n) {
        vector<vector<int> >dp(n+1,vector<int>(n+1,-1));
        //code here
        return f(0,price,n,0,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends