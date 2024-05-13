#include <iostream>
#include <utility>
using namespace std;

pair<int, int> minmax(int arr[],int size)
{
    pair<int, int> p;
    int i=0;
    if(size%2==0)
    {
        p.first = arr[0];
        p.second = arr[1];
        i = 2;
    }
    else
    {
        p.first = arr[0];
        p.second = arr[0];
        i=1;
    }
    while(i+1<size)
    {
        if(arr[i+1]>arr[i])
        {
            if(arr[i+1]>p.first)
                p.first = arr[i+1];
            if(arr[i]<p.second)
                p.second = arr[i];
        }
        else
        {
            if(arr[i]>p.first)
                p.first = arr[i];
            if(arr[i+1]<p.second)
                p.second = arr[i+1];           
        }
        i += 2;
    }
    return p;
}

int main()
{
    int arr[] = {2,6,9,5,2,5,3,1};
    int size = 8;
    pair<int,int> p = minmax(arr, size);
    cout<<"Sum of minimum and maximum elements are: "<< p.first+p.second <<endl;
    return 0;
}
