//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string postToPre(string post_exp) {
        // Write your code here
        stack<string> st;
        string s;
        for(int i=0; i<post_exp.length(); i++)
        {
            if((post_exp[i]=='+')||(post_exp[i]=='/')||(post_exp[i]=='*')||(post_exp[i]=='-'))
            {
                string op1, op2;
                if(!st.empty())
                {
                    op1 = st.top();
                    st.pop();
                }
                if(!st.empty())
                {
                    op2 = st.top();
                    st.pop();
                }
                string temp = post_exp[i]+op2+op1;
                st.push(temp);
            }
            else
            {
                string str="";
                str = str+post_exp[i];
                st.push(str);
            }
        }
        s = st.top();
        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string postfix;
        cin >> postfix;

        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToPre(postfix) << endl;

        // cout << "~\n";
    
cout << "~" << "\n";
}
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends