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
            cout<<"*";
        cout<<endl;
        l--;
    }
}