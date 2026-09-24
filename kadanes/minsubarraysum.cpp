//GeeksForGeeks
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums = {3, -4, 2, -3, -1, 7, -5};
    int best = nums[0],final_sum = nums[0];
    for(int i=1;i<nums.size();i++)
    {
        best = min(nums[i],best+nums[i]);
        final_sum = min(final_sum,best);
    }
    cout<<final_sum;
}