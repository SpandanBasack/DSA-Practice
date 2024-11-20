#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. of rows:"<<endl;
    cin>>n;
    int m = n;
    for(int i=0; i<n; i++)
    {
        for(int k=m-1; k>=0; k--)
            cout<<" ";
        for(int j=0;j<=i; j++)
        {
            if(j>0 && j<i && i<n-1)
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
        m--;
    }
}