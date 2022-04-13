//Map :- Map is a (key, value) pair which contain all the unique keys.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Syntax of Map
    //map<key_dataType, value_dataType> variable_name;

    //HOW TO DECLARE AND INITIALISE A MAP.
        // map<int,string>m;
        // m[0] = "Hello";
        // m[1] = "My";
        // m[2] = "Name";
        // m[3] = "is";
        // m[4] = "Priyanshu";

        // for(auto i: m)
        // cout<<i.first<<" -> "<<i.second<<endl;
    
    //find() --> this function is used to find the key present in map
    //            it returns the iterator.
     map<int,string>m;
        m[0] = "Hello";
        m[1] = "My";
        m[2] = "Name";
        m[3] = "is";
        m[4] = "Priyanshu";

        auto i = m.find(5);
        if(i != m.end())
        cout<<i->second<<endl;
        else
        cout<<"Key not found"<<endl;

        m.erase(3);

        for(auto it : m)
        cout<<it.first<<" --> "<<it.second<<endl;

         
}