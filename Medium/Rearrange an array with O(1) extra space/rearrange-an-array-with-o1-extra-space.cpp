//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    public:
    void arrange(long long arr[], int n) {
      for(int i=0;i<n;i++)
      {
          long long original = arr[i];
          long long transformed = arr[arr[i]]%n;
          arr[i] = original + transformed*n;
      }
      
      for(int i=0;i<n;i++)
      {
          arr[i] = (arr[i]/n);
      }
    }
};


//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin>>t;
    while(t--){
        
        int n;
        //size of array
        cin>>n;
        long long A[n];
        
        //adding elements to the array
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        Solution ob;
        //calling arrange() function
        ob.arrange(A, n);
        
        //printing the elements 
        for(int i=0;i<n;i++){
            cout << A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends