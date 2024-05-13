//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
  long long merge(long long arr[],long long l,long long m,long long r){
        long long a=l,b=m+1;
        vector<long long> v;
        long long i=0;
        while(a<=m && b<=r){
            if(arr[a]>arr[b]){
                v.push_back(arr[b]);
                b++;
                i+=(m-a+1);
            }else{
                v.push_back(arr[a]);
                a++;
            }
        }
        while(a<=m){
            v.push_back(arr[a]);
            a++;
        }
        while(b<=r){
            v.push_back(arr[b]);
            b++;
        }
        for(int i=l;i<=r;i++){
            arr[i]=v[i-l];
        }
        return i;
    }
    
    long long mergesort(long long arr[], long long l, long long r){
        long long i=0;
        if(l>=r) return i;
        long long m = l+(r-l)/2;
        i+=mergesort(arr,l,m);
        i+=mergesort(arr,m+1,r);
        i+=merge(arr,l,m,r);
        return i;
    }
    long long int inversionCount(long long arr[], long long N){
        // Your Code Here
        return mergesort(arr,0,N-1);
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends