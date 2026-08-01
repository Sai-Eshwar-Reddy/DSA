#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    vector<int> sum(n);
    int i=0;
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    for(i=1;i<nums.size();i++)
    {
        nums[i]=nums[i-1]+nums[i];
    }
    for(i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
}
