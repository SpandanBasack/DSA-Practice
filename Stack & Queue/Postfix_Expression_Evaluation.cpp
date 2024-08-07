//{ Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        // Your code here
        stack<int> s;
        for(int i=0; i<S.size(); i++)
        {
            if(isdigit(S[i]))
                s.push(S[i]-'0');
            else
            {
                int n1 = s.top();
                s.pop();
                int n2 = s.top();
                s.pop();
                switch(S[i])
                {
                    case '+':
                        s.push(n1+n2);
                        break;
                    case '-':
                        s.push(n2-n1);
                        break;
                    case '*':
                        s.push(n1*n2);
                        break;
                    case '/':
                        s.push(n2/n1);
                        break;
                }
            }
        }
        return s.top();
    }
};

//{ Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends