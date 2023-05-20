//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isStraightHand(int N, int groupSize, vector<int> &hand) {
       sort(hand.begin(), hand.end());
    if (N % groupSize == 0) {
        for (int p = 0; p < N; p += groupSize) {
            for (int j = p + 1; j < p + groupSize; j++) {
                if (hand[j] - hand[j - 1] > 1) {
                    return false;
                }
            }
        }
        return true;
    }
    return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends