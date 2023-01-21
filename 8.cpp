#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;


int main()
{
    vector <int>v;

    v.push_back(3);
    v.push_back(5);
    v.push_back(8);
    v.push_back(9);
    
    vector <int>b;
    b.push_back(1);
    b.push_back(5);
    b.push_back(8);
    b.push_back(0);
   
 

   for(int i=0;i<v.size();i++)
   {
     auto it=find(b.begin(),b.end(),v[i]);
     if(it!=b.end())
     {
        cout<<v[i]<<" ";
     }
   }
    cout<<endl;

    return 0;
}