//Leetcode - 53
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int best = nums[0],final_sum = nums[0];
    for(int i=1;i<nums.size();i++)
    {
        best = max(nums[i],best+nums[i]);
        final_sum = max(final_sum,best);
    }
    cout<<final_sum;
}