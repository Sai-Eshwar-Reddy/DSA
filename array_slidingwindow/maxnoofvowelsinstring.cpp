//Leetcode - 1456
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size,k;
    cin>>size>>k;
    vector<char> nums(size);
    int i=0;
    for(i=0;i<nums.size();i++)
    {
        cin>>nums[i];
    }
    int count = 0;
    for(i=0;i<k;i++)
    {
        if(nums[i]=='a'||nums[i]=='e'||nums[i]=='i'||nums[i]=='o'||nums[i]=='u')
            count++;
    }
    if(size==k)
    {
        cout<<count;
        return 0;
    }
    int final_count = count;
    for(i=k;i<size;i++)
    {
        if(nums[i-k]=='a'||nums[i-k]=='e'||nums[i-k]=='i'||nums[i-k]=='o'||nums[i-k]=='u')
        {
            count--;
        }
        if(nums[i]=='a'||nums[i]=='e'||nums[i]=='i'||nums[i]=='o'||nums[i]=='u')
        {
            count++;
        }
        final_count = max(final_count,count);
    }
    cout<<final_count;
    return 0;
}