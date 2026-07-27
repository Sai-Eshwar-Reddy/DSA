#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    int i=0,j=0;
    cin>>n;
    vector<int> nums(n);
    for(i=0;i<nums.size();i++)
        cin>>nums[i];
    vector<int>even;
    vector<int>odd;
    for(i=0;i<nums.size();i++)
    {
        if(nums[i]%2==0)
            even.push_back(nums[i]);
        else
            odd.push_back(nums[i]);
    }
    nums.clear();
    nums.insert(nums.end(),even.begin(),even.end());
    nums.insert(nums.end(),odd.begin(),odd.end());
    for(i=0;i<nums.size();i++)
        cout<<nums[i];
}
