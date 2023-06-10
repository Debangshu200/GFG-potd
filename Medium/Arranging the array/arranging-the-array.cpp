//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
class Solution
{
    public:
       void Rearrange(int arr[], int n)
        {
            
            int k=0;
            queue<int> q;
            for(int i=0;i<n;i++){
                if(arr[i]<0){
                    swap(arr[i],arr[k++]);
                }
                else q.push(arr[i]);
            }
            while(k<n){
                arr[k++]=q.front();
                q.pop();
            }
        }
};

//{ Driver Code Starts.
void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
        Solution ob;
        ob.Rearrange(arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} 
// } Driver Code Ends