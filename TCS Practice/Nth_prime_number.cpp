#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the order number of the prime number you wish to find:"<<endl;
    cin>>n;
    int count = 0;
    int k = 2;
    while(count!=n)
    {
        int m = 0;
        for(int i=1; i<=k; i++)
        {
            if(k%i==0)
                m++;
            if(m>2)
                break;
        }
        if(m==2)
            count++;
        m=0;
        k++;
    }
    cout<<"The number is: "<<--k<<endl;
    return 0;   
}