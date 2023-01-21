#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

void print(vector<int> a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector <int>v;

    v.push_back(3);
    v.push_back(5);
    v.push_back(8);
    v.push_back(9);
    print(v);

    return 0;
}