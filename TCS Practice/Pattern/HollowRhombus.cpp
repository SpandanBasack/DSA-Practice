#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows:"<<endl;
    cin>>n;
    int l = n;
    for(int i=0; i<n; i++)
    {
        for(int j=l; j>0; j--)
            cout<<" ";
        for(int k=0; k<n; k++)
        {
            if(k>0 && k<n-1 && i!=0 && i!=n-1)
            {    
                cout<<" ";
                continue;
            }
            cout<<"*";
        }
        cout<<endl;
        l--;
    }
}