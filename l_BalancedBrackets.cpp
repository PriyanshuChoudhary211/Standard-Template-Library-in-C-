#include<bits/stdc++.h>
using namespace std;
unordered_map<char,int>mp = {{'{',-1},{'[',-2},{'(',-3},{'}',1},{']',2},{')',3}};
string check(string s)
{
    stack<char>st;
    for(auto it : s)
    {
        if(mp[it]<0)
        {
            st.push(it);
        }
        else
        {
           if( st.empty() )
             return "NO";
           char t = st.top();
           st.pop();
           if(mp[t] + mp[it] != 0)
           return "NO";
        }
    }
    if(st.empty())
     return "YES";
     else 
     return "NO";

}
int main()
{
    string s;
    cin>>s;
    
    cout<<check(s)<<endl;;
    
}