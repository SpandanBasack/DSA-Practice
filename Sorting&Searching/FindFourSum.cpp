//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        sort(arr.begin(), arr.end());
        int n = arr.size();
        set<vector<int>> s;
        vector<vector<int>> v;
        int l, r;
        for(int i=0; i<n-3; i++)
        {
            for(int j=i+1; j<n-2; j++)
            {
                l = j+1;
                r=n-1;
                while(l<r)
                {   
                    int sum = arr[i]+arr[j]+arr[l]+arr[r];
                    if(sum==k)
                    {
                        s.insert({arr[i],arr[j],arr[l],arr[r]});
                        l++;
                        r--;
                    }
                    else if(sum<k)
                        l++;
                    else
                        r--;
                }
            }
        }
        for(auto it : s)
            v.push_back(it);
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends