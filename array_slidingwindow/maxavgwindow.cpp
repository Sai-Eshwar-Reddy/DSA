//Leetcode - 643
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int size,k;
    cin>>size>>k;
    vector<int> nums(size);
    int i=0;
    for(i=0;i<nums.size();i++)
    {
        cin>>nums[i];
    }
    if(nums.size()<=1)
    {
        cout<<nums[0]<<" ";
        return 0;
    }
    double avg = 0,sum = 0;
    for(i=0;i<k;i++)
    {
        sum = sum + nums[i];
    }
    avg = sum / k ;
    double max_avg = sum / k;
    double new_sum = 0;
    for(i=k;i<nums.size();i++)
    {
        new_sum = sum + nums[i] - nums[i-k];
        sum = new_sum;
        avg = new_sum/k;
        if(avg>max_avg)
            max_avg = avg;
    }
    cout<<max_avg;
}