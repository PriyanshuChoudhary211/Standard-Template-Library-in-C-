#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s; //Similarly for string, float, char, double
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    s.push(0);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    
    
}