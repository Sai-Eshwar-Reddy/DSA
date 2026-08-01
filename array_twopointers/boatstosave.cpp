#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,limit;
    cin>>n>>limit;
    int i=0,j=0;
    vector<int> nums(n);
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int count=0;
    sort(nums.begin(),nums.end());
    j=nums.size()-1;
    i=0;
    while(i<=j)
    {
        if(nums[i]+nums[j]<=limit)
        {
            count++;
            j--;
            i++;
        }
        else
        {
            count++;
            j--;
        }
    }
    cout<<count<<" ";
}