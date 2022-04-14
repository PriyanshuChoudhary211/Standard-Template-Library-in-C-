#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int n;
    cout<<"Enter number of element to insert: "<<endl;
    cin>>n;
    cout<<"Enter element: ";
    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    for(auto it : s)
    {
        cout<<it<<" ";
    }
    int key;
    cout<<endl<<"Enter key to search: "<<endl;
    cin>>key;
    auto it = s.find(key);
    if(it != s.end())
    {
        cout<<(*it)<<"Element Found"<<endl;
    }
    else 
    cout<<"Element Not found"<<endl;
}
