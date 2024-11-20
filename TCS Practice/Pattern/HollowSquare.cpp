#include <iostream>
using namespace std;
int main()
{
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<8; j++)
        {
            if(i==0 || i==8)
                cout<<"*";
            else if(j==0 || j==7)
                cout<<"*";
            else if(i==j)
                cout<<"*";
            else if(i == (7-j))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}