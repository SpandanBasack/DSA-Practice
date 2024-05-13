//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
public:
    int getMinDiff(int arr[], int size, int k) 
    {
        std::sort(arr, arr+size);
        int minDiff = arr[size-1] - arr[0];
        int adjustedMin, adjustedMax;
        for(int i=1; i<size; i++)
        {
            adjustedMin = std::min(arr[i]-k, arr[0]+k);
            adjustedMax = std::max(arr[i-1]+k, arr[size-1]-k);
             if(adjustedMin < 0)
                continue;
            minDiff = std::min(minDiff, adjustedMax - adjustedMin);
        }
        return minDiff;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends