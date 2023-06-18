//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    
   int distributeTicket(int n, int k) {
        // code here
        deque<int> dq;
        for (int i=1; i<=n; i++)
        {
            dq.push_front(i);
        }
        
        
        int left = 0, right = n-1, countLeft = 0, countRight = 0;
        while(dq.size()!=1)
        {
            int x = k;
            while(x!=0 && dq.size()!=1)
            {
                // cout<<dq.back()<<" front"<<endl;
                dq.pop_back();
                x--;
            }
            x = k;
            while(x!=0 && dq.size()!=1)
            {
                // cout<<dq.front()<<" back "<<endl;
                dq.pop_front();
                x--;
            }
        }
        return dq.front();
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends