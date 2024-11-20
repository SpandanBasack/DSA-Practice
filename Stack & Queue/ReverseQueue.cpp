//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    void reverse(queue<int> &q,int k)
    {
        if(k==0 || q.empty())
            return;
        else
        {
            int temp = q.front();
            q.pop();
            reverse(q, k-1);
            q.push(temp);
        }
    }
    
    queue<int> modifyQueue(queue<int> q, int k) 
    {
        // add code here.
        int diff = q.size()-k;
        reverse(q, k);
        while((!q.empty()) && (diff>0))
        {
            q.push(q.front());
            q.pop();
            diff--;
        }
        return q;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        Solution ob;
        queue<int> ans = ob.modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends