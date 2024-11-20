#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a;
    cin>>b;
    int result = min(a,b);
    while(result!=0)
    {
        if(a%result == 0 && b%result == 0)
            break;
        result--;
    }
    cout<<"The GCD of the two numbers is: "<<result;
    return 0;
}