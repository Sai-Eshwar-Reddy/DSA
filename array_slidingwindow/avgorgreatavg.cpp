//Leetcode - 1343
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size,threshold;
    cin>>size>>threshold;
    vector<int> nums(size);
    int i=0;
    for(i=0;i<nums.size();i++)
    {
        cin>>nums[i];
    }
    int k;
    cin>>k;
    int count=0,sum=0;
    double avg;
    for(i=0;i<k;i++)
    {
        sum = sum + nums[i];
    }
    avg = sum / k;
    if(avg>=threshold)
    {
        count++;
    }
    for(i=k;i<size;i++)
    {
        sum = sum + nums[i] - nums[i-k];
        avg = sum / k;
        if(avg >= threshold)
            count++;
    }
    cout<<count;
}