//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to calculate the span of stockâ€™s price for all n days.
    vector<int> calculateSpan(vector<int>& arr) 
    {
        // write code here
        stack<int> s, s1;
        vector<int> v;
        for(int i=0; i<arr.size(); i++)
        {
            if(s.empty())
            {
                s.push(arr[i]);
                v.push_back(1);
            }
            else if((!s.empty()) && (s.top() <= arr[i]))
            {
                int k = 1;
                while((!s.empty()) && (s.top() <= arr[i]))
                {
                    s1.push(s.top());
                    s.pop();
                    k++;
                }
                while(!s1.empty())
                {
                    s.push(s1.top());
                    s1.pop();
                }
                v.push_back(k);
                s.push(arr[i]);
            }
            else
            {
                s.push(arr[i]);
                v.push_back(1);
            }
        }
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> ans = obj.calculateSpan(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends