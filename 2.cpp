#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

int main()
{
    vector <int>v;
    int n;
    cout<<"how many element you want to insert : ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.insert(v.end(),temp);
    }

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;

    return 0;
}