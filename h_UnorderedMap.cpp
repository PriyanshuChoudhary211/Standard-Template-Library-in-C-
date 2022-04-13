#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, int>mp;
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        mp[s]++;
    }
    for(auto it:mp)
    {
        cout<<it.first<<" --> "<<it.second<<endl;
    }
    int x;
    cin>>x;
    while(x--)
    {
        string s;
        cin>>s;
        cout<<mp[s]<<endl;

    }
}