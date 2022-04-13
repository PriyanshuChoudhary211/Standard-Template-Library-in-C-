#include<bits/stdc++.h>
using namespace std;
int main()
{
    //pair<int,string>p;
    //Number of ways to inititalise pair
    //1. By using p = make_pair(firstValue,SecondValue) function
    //2. By simply appling braces p = {firstValue , secondValue}
    // p = make_pair(1,"Hello");
    // cout<<p.first<<" "<<p.second;
    
    //Comparison operators

    // pair<int, int>pair1={2,1};
    // pair<int,int>pair2={1,3};
    // cout<<(pair1=pair2)<<endl;

   // swap()

    // pair<int,int>pair1 = {1,2};
    // pair<int, int> pair2 = {2,3};
    // pair1.swap(pair2);
    // cout<<pair1.first<<" "<<pair1.second<<endl;
    // cout<<pair2.first<<" "<<pair2.second<<endl;
 
   //tie()

    //  pair<int,int>pair1 = {1,2};
    //  int a, b;
    //  tie(a,b) = pair1;
    //  cout<<a<<" "<<b; 
    int n;
    cin>>n;
    pair<int, int>pair[n];
    for(int i = 0 ; i<n;i++)
    {
        cin>>pair[i].first;
        cin>>pair[i].second;
    }
    sort(pair,pair+n);
    for(int i = 0 ; i<n;i++)
    {
        cout<<pair[i].first<<" ";
        cout<<pair[i].second<<endl;
    }
    int k;
    cin>>k;
    for(int i = 0 ; i<n;i++)
    {
        if(pair[i].first == k)
          cout<<pair[i].second;
    }


}