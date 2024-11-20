#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows:"<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j = 0; j<i; j++)
            cout<<" ";
        for(int k=0; k<n; k++)
        {
            if(k>0 && k<n-1 && i>0 && i<n-1)
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