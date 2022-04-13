#include<bits/stdc++.h>
using namespace std;
// void print(vector<int>&vec1)
// {
   
//     for(int i  =  0 ; i<vec1.size();i++)
//         cout<<vec1[i];


//      vec1.push_back(10);
    
// }
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int>vec;
//     for(int i = 0 ; i<n;i++)
//      {
//          int k;
//          cin>>k;
//          vec.push_back(k);
//      }
//      print(vec);
//      cout<<endl;
//      print(vec);

//      for(int i = 0 ; i<vec.size();i++)
//      {
//          cout<<vec[i];
//      }
void print(vector<string> &vec)
{
    for(int i = 0 ; i<vec.size();i++)
      cout<<i+1<<". "<<vec.at(i)<<endl;

}
int main()
{
    int n;
    cout<<"Enter the number of students in class: ";
    cin>>n;
    vector<string>vec;
    for(int i = 0 ; i<n;i++)
    {
        string s;
        cin>>s;
        vec.push_back(s);

    }
    print(vec);
}  

