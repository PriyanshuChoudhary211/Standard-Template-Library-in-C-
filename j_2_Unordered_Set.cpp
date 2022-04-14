#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int>s;
    int n;
    cin>>n;
    for(int i = 0 ; i<n ; i++)
    {
        int x;
        cin>>x;
        s.insert(x);//take --> O(1): Time complexity
    }
    auto m = s.find(3); // take --> O(1): Time Complexity
    if(m!=s.end())
    {
        cout<<"Element Found Successfully";
    }
    else
    cout<<"Not found";
    for(auto it:s)
    cout<<it<<" ";
}