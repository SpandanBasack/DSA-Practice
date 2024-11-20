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
        for(int j=0; j<i; j++)
            cout<<" ";
        for(int k=m-1; k>=0; k--)
        {
            if(k<m-1 && k>0 && i>0)
                cout<<" ";
            else 
                cout<<"*";
        }            
        cout<<endl;
        m--;
    }
    return 0;
}