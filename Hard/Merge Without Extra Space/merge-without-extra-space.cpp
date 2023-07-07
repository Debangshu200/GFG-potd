//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    // Function to merge the arrays.
    void merge(long long arr1[], long long arr2[], int n, int m)
    {
        // code here
        int GaP_ = ceil((float)(n + m) / 2);
        while (GaP_ > 0)
        {
            int Initial = 0;
            int IN = GaP_;
            while (IN < (n + m))
            {
                if (IN < n && arr1[Initial] > arr1[IN])
                {
                    swap(arr1[Initial], arr1[IN]);
                }
                else if (IN >= n && Initial < n && arr1[Initial] > arr2[IN - n])
                {
                    swap(arr1[Initial], arr2[IN - n]);
                }
                else if (IN >= n && Initial >= n && arr2[Initial - n] > arr2[IN - n])
                {
                    swap(arr2[Initial - n], arr2[IN - n]);
                }
                IN++;
                Initial++;
            }
            if (GaP_ == 1)
            {
                GaP_ = 0;
            }
            else
            {
                GaP_ = ceil((float)GaP_ / 2);
            }
        }
    } 
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends