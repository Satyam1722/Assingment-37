#include<iostream>
#include<vector>
#include<iterator>

using namespace std;


int main()
{
    vector <int>v;

    v.push_back(3);
    v.push_back(5);
    v.push_back(8);
    v.push_back(9);
    
    vector <int>b;

    for(int i=0;i<v.size();i++)
    {
        b.insert(b.end(),v[i]);
    }

    for(int i=0;i<b.size();i++)
    {
        cout<<b.at(i)<<" ";

    }
    cout<<endl;

    return 0;
}