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
    
    int sum=0;

    for(int i=0;i<v.size();i++)
    {
        sum+=v[i];
    }
    cout<<"sum of all element is : "<<sum<<endl;

    return 0;
}