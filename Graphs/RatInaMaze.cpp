//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    string dir = "UDLR";
    int dr[4] = {-1, 1, 0, 0};
    int dc[4] = { 0, 0, -1, 1};
    bool isValid(int row,int col,vector<vector<int>> mat)
    {
        return row>=0 && col>=0 && row < mat.size() && col < mat.size() && mat[row][col]; 
    }
    void findPathUtil(int row, int col,vector<vector<int>> mat, vector<string> &paths, string currentPath)
    {
        if(row == mat.size()-1 && col == mat.size()-1)
        {    
            paths.push_back(currentPath);
            return;
        }
        mat[row][col] = 0;
        for(int i = 0; i<4; i++)
        {
            int nextrow = row + dr[i];
            int nextcol = col + dc[i];
            if(isValid(nextrow, nextcol, mat))
            {
                currentPath = currentPath + dir[i];
                findPathUtil(nextrow, nextcol, mat, paths, currentPath);
                currentPath.pop_back();
            }
        }
        mat[row][col] = 1;
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        vector<string> paths;
        string currentPath="";
        if(mat[0][0]==1)
        findPathUtil(0, 0, mat, paths, currentPath);
        if(paths.empty())
        {
            paths.push_back("-1");
            return paths;
        }
        return paths;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends