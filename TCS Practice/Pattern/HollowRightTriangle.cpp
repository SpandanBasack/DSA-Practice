#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows:"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(j>0 && j<i-1 && i<n)
            {
                cout<<" ";
                continue;
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}