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
    int i=0;
    for(i=0;i<nums.size();i++)
    {
        nums[i]=nums[i]*nums[i];
    }
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
}