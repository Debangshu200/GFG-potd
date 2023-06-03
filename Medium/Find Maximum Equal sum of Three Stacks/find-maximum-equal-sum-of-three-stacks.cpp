//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        int ans = 0;
        int sum1=S1[N1-1], sum2=S2[N2-1], sum3=S3[N3-1];
        int i1=N1-2, i2=N2-2, i3=N3-2;
        while(i1>=0 || i2>=0 || i3>=0){
            if(sum1==sum2 && sum2==sum3){
                ans=max(ans, sum1);
                sum1+=S1[i1];
                sum2+=S2[i2];
                sum3+=S3[i3];
                i1--;
                i2--;
                i3--;
            }
            else if(i2>=0 && (sum1>sum2 || sum3>sum2)){
                sum2+=S2[i2];
                i2--;
            }
            else if(i3>=0 && (sum2>sum3 || sum1>sum3)){
                sum3+=S3[i3];
                i3--;
            }
            else if(i1>=0 && (sum2>sum1 || sum3>sum1)){
                sum1+=S1[i1];
                i1--;
            }else{
                break;
            }
            
        }
        
        if(sum1==sum2 && sum2==sum3) ans=max(ans, sum1);
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}
// } Driver Code Ends