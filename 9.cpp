#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
    vector <float>v;

    v.push_back(3.9);
    v.push_back(9.9);
    v.push_back(1.909);
    v.push_back(99.9);
    v.push_back(78.977);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }

    return 0;

    
}