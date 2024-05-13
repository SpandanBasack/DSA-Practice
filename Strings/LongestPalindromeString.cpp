//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
     string longestPalin (string S)
    {
        string maxSub="";
        // if(S.size()%2==0)
        // {
            for(int i=0; i<S.size(); i++)
            {
                    int last=i;
                    int first=i;
                    while(first>=0 && last<S.size())
                    {
                        if(S[first]!=S[last])
                        break;  
                        last++;
                        first--;
                    }
                    string sub1 = S.substr(first+1, last-first-1);
                    if(sub1.size()>maxSub.size())
                    maxSub = sub1;
            }
        // }
        // else
        // {
            for(int i=0; i<S.size(); i++)
            {
                    int last=i+1;
                    int first=i;
                    while(first>=0 && last<S.size())
                    {
                        if(S[first]!=S[last])
                        break;  
                        last++;
                        first--;
                    }
                    string sub1 = S.substr(first+1, last-first-1);
                    if(sub1.size()>maxSub.size())
                    maxSub = sub1;
            }
            
        // }
        return maxSub;
    }
    //  string longestPalin (string s) {
    //     int n=s.size();
    //     int start=0,end=0,maxl=1;
        
    //     //odd length
    //     for(int i=0;i<n;i++)
    //     {
    //         int l=i,r=i;
    //         while(l>=0 && r<n)
    //         {
    //             if(s[l]!=s[r])
    //             {
    //                 break;
    //             }
    //             l--;
    //             r++;
    //         }
    //         int len=r-l-1;
    //         if(len>maxl)
    //         {
    //             maxl=len;
    //             start=l+1;
    //             end=r-1;
    //         }
    //     }
        
    //     //even length
    //     for(int i=0;i<n;i++)
    //     {
    //         int l=i,r=i+1;
    //         while(l>=0 && r<n)
    //         {
    //             if(s[l]!=s[r])
    //             {
    //                 break;
    //             }
    //             l--;
    //             r++;
    //         }
    //         int len=r-l-1;
    //         if(len>maxl)
    //         {
    //             maxl=len;
    //             start=l+1;
    //             end=r-1;
    //         }
    //     }
        
    //     return s.substr(start,maxl);
    // }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends