//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int editDistance(string s, string t)
    {
        int sizes = s.size();
        int sizet = t.size();
        int arr[sizes+1][sizet+1];
        for(int i=0; i<sizes+1; i++)
        {
            for(int j=0; j<sizet+1; j++)
            {
                arr[i][j]=0;
            }
        }
        for (int i = 0; i <= sizes; i++) {
        arr[i][sizet] = sizes - i; // Cost to delete all characters to transform s[i..m] to an empty string
            }
        for (int j = 0; j <= sizet; j++) {
             arr[sizes][j] = sizet - j; // Cost to insert all characters to transform an empty string to t[j..n]
        }
        for(int i=sizes-1; i>=0; i--)
        {
            for(int j=sizet-1; j>=0; j--)
            {
                if(s[i]==t[j])
                {
                    arr[i][j]=arr[i+1][j+1];
                }
                else
                {   int minimum = min(arr[i+1][j+1], min(arr[i+1][j], arr[i][j+1]));
                    arr[i][j]=minimum+1;
                }
            }
        }
        return arr[0][0];
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends