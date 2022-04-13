#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>vec[n];
    for(int i=0 ; i<n;i++)
    {
        int x;
        cout<<"Enter the size of "<<i<<" th "<<endl;
        cin>>x;
        for(int j = 0 ; j<x ; j++)
        {
            int m;
            cin>>m;
            vec[i].push_back(m);
        }

    }

    for(int i=0 ; i<n;i++)
    {
        for(int j = 0 ; j<vec[i].size();j++)
            cout<<vec[i][j]<<" ";

        cout<<endl;
    } 
}