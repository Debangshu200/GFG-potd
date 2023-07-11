//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
   int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		vector<vector<int>>vis(n,vector<int>(m,0));
 		int xcor[4]={0,1,0,-1};
 		int ycor[4]={1,0,-1,0};
 		int i=0,j=0;
 		vis[i][j]=1;
 		while(k>=0){
 		    if(k==1)return a[i][j];
 		   // cout<<i<<" "<<j<<endl;
 		    for(int ind=0; ind<4; ind++){
 		        int ni=i+xcor[ind];
 		        int nj=j+ycor[ind];
 		        while(k>=0 and ni>=0 and nj>=0 and ni<n and nj<m and vis[ni][nj]==0){
 		            vis[i][j]=1;
 		            i=ni;
 		            j=nj;
 		            k--;
 		           if(k==1)return a[i][j];
 		           ni=i+xcor[ind];
 		           nj=j+ycor[ind];
 		        }
 		    }
 		}
 		return a[0][0];
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends