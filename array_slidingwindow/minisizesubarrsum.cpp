//Leetcode - 209
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size,target;
    cin>>size>>target;
    vector<int> nums(size);
    int i=0;
    for(i=0;i<nums.size();i++)
    {
        cin>>nums[i];
    }
    int high = 0,low = 0,sum = 0,res = INT_MAX;
    while(high<size)
    {
        sum = sum + nums[high];
        high++;
        while(sum>=target)
        {
            res = min(res,high-low);
            sum = sum - nums[low];
            low++;
        }
    }
    cout<<res;
}