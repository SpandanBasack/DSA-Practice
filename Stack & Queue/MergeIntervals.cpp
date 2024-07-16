//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         if(intervals.empty())
            return vector<vector<int>>();
        sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b)
        {
            return a[0]<b[0];
        });
        stack<vector<int>> s;
        s.push(intervals[0]);
        for(int i=1; i<intervals.size(); i++)
        {
            vector<int> current = intervals[i];
            if(current[0]<=(s.top())[1])
                (s.top())[1] = max((s.top())[1], current[1]);
            else
                s.push(current);
        }
        vector<vector<int>> mergedIntervals;
        while(!s.empty())
        {
            mergedIntervals.insert(mergedIntervals.begin(), s.top());
            s.pop();
        }
        return mergedIntervals;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends