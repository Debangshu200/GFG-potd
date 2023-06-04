//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
    { stack<char>st; 
           string ans="";
            char x;
            reverse(s.begin(),s.end());
            for(int i=0;i<s.size();i++)
            {
                if(s[i]>=48 && s[i]<=57)
                {
                    st.push(s[i]);
                    
                }
                else if(s[i]<48 ||s[i]>57)
             {
                 while(!st.empty())
                 {
                     x=st.top();
                     ans+=x;
                     st.pop();

                 }
                 ans+=s[i];
             }
                       
            }
            while(!st.empty())
            {
                x= st.top();
                
                ans+=x;
                st.pop();
            }
          
            return ans;
        }


};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends