//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void DFSrec(vector<int> adj[],vector<bool> &visited, vector<int> &traversal, int s)
    {
        visited[s] = true;
        traversal.push_back(s);
        // int size =(int) (sizeof(adj[s])/adj[s][0]);
        // for(int x = 0; x<size; x++)
        for(int x: adj[s])
            if(!visited[x])
                DFSrec(adj, visited, traversal, x);
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<bool> visited(V, false);
        vector<int> traversal;
        DFSrec(adj, visited, traversal, 0);
        return traversal;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends