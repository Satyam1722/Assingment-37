#include<iostream>
#include<vector>
#include<iterator>

using namespace std;


int main()
{
    vector <int>v;

    v.push_back(3);
    v.push_back(5);
    v.push_back(10);
    v.push_back(9);
    
    int mine=INT_MAX;
    int maxe=INT_MIN;

    for(int i=0;i<v.size();i++)
    {
        mine=min(mine,v[i]);
        maxe=max(maxe,v[i]);
    }

    cout<<"minimum element is : "<<mine<<endl;
    cout<<"maximum element is : "<<maxe<<endl;
    
    return 0;
}