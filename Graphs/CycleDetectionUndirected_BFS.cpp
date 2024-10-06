//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycleUtil(vector<int> adj[], bool *visited, int s)
    {
        queue<int> q;
        q.push(s);
        while(!q.empty())
        {
            int v = q.front();
            q.pop();
            if(visited[v])
                return true;
            visited[v] = true;
            for(int i=0; i<adj[v].size(); i++)
            {
                if(!(visited[adj[v][i]]))
                    q.push(adj[v][i]);
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        bool* visited = new bool[V]{false};
        for(int i=0; i<V; i++)
        {
            if(!visited[i] && isCycleUtil(adj, visited, i))
                return true;
        }
        return false;
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
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends