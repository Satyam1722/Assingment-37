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

    int n;
    cout<<"enter element you want to check : ";
    cin>>n;

    vector<int>::iterator it;
    it=find(v.begin(),v.end(),n);
    if(it!=v.end())
    cout<<"element found at "<<it-v.begin()+1<<" position "<<endl;
    else
    cout<<"element not found "<<endl;

    return 0;
}