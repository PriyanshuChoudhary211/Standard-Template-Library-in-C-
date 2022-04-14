/*
Problem
Monk is a multi-talented person, and prepares results for his college in his free time. (Yes, he is still in love with his old college!) He gets a list of students with their marks. The maximum marks which can be obtained in the exam is 100.

The Monk is supposed to arrange the list in such a manner that the list is sorted in decreasing order of marks. And if two students have the same marks, they should be arranged in lexicographical manner.

Help Monk prepare the same!

Input format:
On the first line of the standard input, there is an integer N, denoting the number of students. N lines follow, which contain a string and an integer, denoting the name of the student and his marks.

Output format:
You must print the required list.
*/
//SOLUTION

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	map<int , multiset<string> , greater<int> >m;
	for(int i = 0 ; i<n ; i++)
	{
	   string s;
	   cin>>s;
	   int y;
	   cin>>y;
       m[y].insert(s);
	}
	for(auto it : m)
	{
        auto &name = it.second;
		for(auto t : name)
		{
			cout<<t<<" "<<it.first<<endl;	
		}   

	}
}