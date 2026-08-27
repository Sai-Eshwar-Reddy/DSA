//Leetcode - 904
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    int k=2;
    int size;
    cin>>size;
    vector<int> nums(size);
    int i;
    for(i=0;i<size;i++)
    {
        cin>>nums[i];
    }
    unordered_map<int,int> um;
    int high=0,low=0,res=0;
    for(high=0;high<size;high++)
    {
        um[nums[high]]++;
        while(um.size()>k)
        {
            um[nums[low]]--;
            if(um[nums[low]]==0)
                um.erase(nums[low]);
            low++;
        }
        res=max(res,high-low+1);
    }
    cout<<res;
}