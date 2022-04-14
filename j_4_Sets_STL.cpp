/*
Coming to the problem, you will be given  queries. Each query is of one of the following three types:

  : Add an element  to the set.
  : Delete an element  from the set. (If the number  is not present in the set, then do nothing).
  : If the number  is present in the set, then print "Yes"(without quotes) else print "No"(without quotes).

Input Format

The first line of the input contains  where  is the number of queries. The next  lines contain  query each. Each query consists of two integers  and  where  is the type of the query and  is an integer.

Constraints




Output Format

For queries of type  print "Yes"(without quotes) if the number  is present in the set and if the number is not present, then print "No"(without quotes).
Each query of type  should be printed in a new line.

Sample Input

8
1 9
1 6
1 10
1 4
3 6
3 14
2 6
3 6
Sample Output

Yes
No
No

*/
//SOLUTION

#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
     unordered_set<int>s;
    while(t--)
    {
         int x,y;
         cin>>y>>x;
         switch (y) {
         case 1:
             s.insert(x);break;
             break;
         case 2:
             if(s.find(x) !=s.end())
                s.erase(s.find(x));
                break;
         case 3:
              
              if(s.find(x)!=s.end())
                cout<<"Yes"<<endl;
                else
                cout<<"No"<<endl;
                
                break;
         }       
    }   
    return 0;
}



