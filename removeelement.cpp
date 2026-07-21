#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,target;
    cin>>n>>target;
    int i=0;
    vector<int> nums(n);
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    i=0;
    for(int j=0;j<nums.size();j++)
    {
        if(nums[j]!=target)
        {
            nums[i++]=nums[j];
        }
    }
    cout<<i;
    return 0;
}