//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
   public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
        //Your code here
        vector<int> arr(26, 0);
        queue<char> ans;
        
        int i = 0;
        while(S[i] != '\0'){
            if(arr[S[i] - 'a'] == 0){
                ans.push(S[i]);
            }
            arr[S[i] - 'a']++;
            i++;
        }
        
        for(i=0; i<26; i++){
            if(arr[ans.front() - 'a'] == 1){
                return ans.front();
            }
            ans.pop();
        }
        return '$';
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends