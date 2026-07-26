#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-2;i++)
    {
        if(i>0 && nums[i]==nums[i-1])
            continue;
        int left = i+1;
        int right = nums.size()-1;
        while(left<right)
        {
            if(nums[i]+nums[left]+nums[right] == 0)
            {
                cout<<nums[i]<<" "<<nums[left]<<" "<<nums[right]<<"\n";
                left++;
                right--;
                while(left<right && nums[left]==nums[left-1])
                    left++;
                while(left<right && nums[right]==nums[right+1])
                    right--;
            }
            else if(nums[i]+nums[left]+nums[right]<0)
                left++;
            else
                right--;
        }
    }
}