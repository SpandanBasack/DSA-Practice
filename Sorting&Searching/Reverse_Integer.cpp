#include<iostream>
using namespace std;
int main()
{
    int n=0, k=0, r=0;
	cout<<"Enter a number"<<endl;
    cin>>n;
    while(n>0)
    {
        k = n%10;
        r = r*10+k;
        n=n/10; 
    }
    cout<<r;
}
