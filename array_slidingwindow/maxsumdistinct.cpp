#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    int size,k,i=0;
    cin>>size>>k;
    vector<int> nums(size);
    for(i=0;i<size;i++)
    {
        cin>>nums[i];
    }
    int high=0,low=0,sum=0,max_sum=0;
    unordered_map<int,int> um;
    for(high=0;high<k;high++)
    {
        um[nums[high]]++;
        sum = sum + nums[high];
    }   
    if(um.size()==k)
    {
        max_sum = max(max_sum,sum);
    }
    for(high=k;high<nums.size();high++)
    {
        um[nums[low]]--;
        if(um[nums[low]]==0)
            um.erase(nums[low]);
        sum = sum-nums[low];
        low++;
        um[nums[high]]++;
        sum = sum+nums[high];
        if(um.size()==k)
        {
            max_sum = max(sum,max_sum);
        }
    }
    cout<<max_sum;
}