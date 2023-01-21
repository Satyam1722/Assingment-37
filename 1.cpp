#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
    vector <int>v={1,2,3,5,9};

    for(auto i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }

    return 0;
}