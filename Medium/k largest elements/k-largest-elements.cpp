//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code Start

	    priority_queue<int> p;
	    vector<int> ans;
	    for(int i = 0; i < n; i++)
	        p.push(arr[i]);
	    while(k--)
	        ans.push_back(p.top()), p.pop();
	    return ans;

           // Code End
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends