//Leetcode - 1423
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size,k;
    cin>>size>>k;
    vector<int> nums(size);
    for(int i=0;i<size;i++)
    {
        cin>>nums[i];
    }
    int high=0,low=0,total_sum=0,sum=0,window_sum=0,max_sum=0,ws = size-k;
    for(high=0;high<nums.size();high++)
    {
        total_sum = total_sum + nums[high];
    }
    high=0;
    for(high=0;high<ws;high++)
    {
        window_sum = window_sum + nums[high];
    }
    max_sum = total_sum-window_sum;
    for(high=ws;high<nums.size();high++)
    {
        window_sum = window_sum + nums[high] - nums[high-ws];
        sum = total_sum - window_sum;
        max_sum = max(max_sum,sum);
    }
    cout<<max_sum;
}