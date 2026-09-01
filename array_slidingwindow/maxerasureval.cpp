//Leetcode - 1695
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    int size;
    cin>>size;
    vector<int>nums(size);
    int high=0,low=0,sum=0,res=0;
    for(high=0;high<size;high++)
    {
        cin>>nums[high];
    }
    unordered_map<int,int>um;
    for(high=0;high<size;high++)
    {
        um[nums[high]]++;
        sum = sum +nums[high];
        while(um.size()<high-low+1)
        {
            um[nums[low]]--;
            if(um[nums[low]]==0)
                um.erase(nums[low]);
            sum = sum - nums[low];
            res=max(res,sum);
            low++;
        }
        res=max(sum,res);
    }
    cout<<res;
}