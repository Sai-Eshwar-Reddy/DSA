#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,target;
    cin>>n>>target;
    vector<int> v(n);
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    int i=0,j=v.size()-1;
    while(i<j)
    {
        if(v[i]+v[j]==target)
        {
            cout<<i<<" "<<j;
            return 0;
        }
        if(v[i]+v[j]<target)
            i++;
        else
            j--;
    }
}