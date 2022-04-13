#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector<int>ans = {1,2,3,4,5,6};

//SYNTAX TO INITIALISE VECTOR
    // dataType :: iterator pointer_name

// What does iterator do?
    // so iterator points the element of container.

    // vector<int>::iterator it;
    // for(it = ans.begin(); it != ans.end();it++)
    // {
    //     cout<<(*it)<<" ";

    // }

//Difference betweeen it++ and it+1, where it is a iterator
    //it++ --> it will take us to the next iterator.
    //it+1 --> it will take us to the next location, this is only valid in vector not in map,set.

//Accessing vector pair through iterator
    vector<pair<int,int>>ans = {{1,2},{2,3},{3,4},{4,5}};
    vector<pair<int,int>>::iterator it;
    for(it = ans.begin(); it!=ans.end();it++)
       cout<<(*it).first<<" "<<(*it).second<<endl;

    

}