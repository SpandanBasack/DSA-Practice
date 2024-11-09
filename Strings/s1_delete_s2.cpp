//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string removeChars(string string1, string string2) {
        // code here
        unordered_map<char, bool> m;
        string s;
        for(int i=0; i<string2.length(); i++)
            m[string2[i]] = true;
        for(int i=0; i<string1.length(); i++)
        {
            if(m.find(string1[i])!=m.end())
                continue;
            else
                s = s + string1[i];
        }
        return s;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends