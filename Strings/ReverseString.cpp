#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void reverseString(vector<char> &s)
{
    int size = s.size();
    for(int i=0, j=size-1; i<ceil(size/2); i++, j--)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int main()
{
    vector<char> s = {'S', 'p', 'a', 'n', 'a', 'n'};
    reverseString(s);
    for(int i=0; i<s.size(); i++)
    {
        cout<< s[i] <<" ";
    }
}