#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);

    int i=0;
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    i=n-2;
    while(i>=0 && nums[i]>=nums[i+1])
    {
        i--;
    }
    if(i>=0)
    {
        int j=n-1;
        while(nums[i]>=nums[j])
            j--;
        swap(nums[i],nums[j]);
    }
    reverse(nums.begin()+i+1,nums.end());
    for(i=0;i<n;i++)
    {
        cout<<nums[i];
    }
}