#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    vector<vector<int>> ans;
    for(int i = 0 ; i<n ; i++)
    {
        vector<int> temp;
        int x;
        cin>>x;
        for(int j = 0 ; j < x ; j++)
        {
            int m;
            cin>>m;
            temp.push_back(m);

        }
        ans.push_back(temp);
    }

    for(int i = 0 ; i<ans.size(); i++)
    {
        for(int j = 0 ; j<ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";

        }
        cout<<endl;
    }
}