#include<iostream>
#include<unordered_map>
using namespace std;
int printDups(string str)
{
    unordered_map<char, int> m;
    for(int i=0; i<str.size(); i++)
    {
        m[str[i]]++;        
    }
    for(auto it : m)
    {
        if(it.second>1)
        {
            cout<<it.first<<" - "<<it.second<<endl;
        }
    }
    return 0;            
}
int main()
{
    string s;
    cout<<"Enter a string:"<<endl;
    cin>>s;
    printDups(s);
    return 0;
}