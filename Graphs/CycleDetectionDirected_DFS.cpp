//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclicUtil(vector<bool> &visited, vector<bool> &rec_stack, vector<int> adj[], int x)
    {
        if(!visited[x])
        {
            visited[x] = true;
            rec_stack[x] = true;
            for(int i=0; i<adj[x].size(); i++)
            {
                if(!visited[adj[x][i]] && isCyclicUtil(visited, rec_stack, adj, adj[x][i]))
                    return true;
                else if(rec_stack[adj[x][i]])
                    return true;
            }
        }
        rec_stack[x] = false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<bool> visited(V, false);
        vector<bool> rec_stack(V, false);
        for(int i=0; i<V; i++)
        {
            if(!visited[i] && isCyclicUtil(visited, rec_stack, adj, i))
                return true;
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends