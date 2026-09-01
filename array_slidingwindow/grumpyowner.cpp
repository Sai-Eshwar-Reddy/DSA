//Leetcode - 1052
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    vector<int>customers(size),grumpy(size);
    for(int i=0;i<size;i++)
    {
        cin>>customers[i];
    }
    for(int i=0;i<size;i++)
    {
        cin>>grumpy[i];
    }
    int k;
    cin>>k;
    int high=0,low=0,ns=0,ans;
    for(high=0;high<customers.size();high++)
    {   
        if(grumpy[high]==0)
        {
            ns = ns + customers[high];
        }
    }
    int max_gain=0,gain_sum=0;
    for(high=0;high<k;high++)
    {
        if(grumpy[high]==1)
            gain_sum = gain_sum+customers[high];
    }
    max_gain = max(max_gain,gain_sum);
    for(high=k;high<size;high++)
    {
        low++;
        if(grumpy[low-1]==1)
            gain_sum = gain_sum - customers[low-1];
        if(grumpy[high]==1)
            gain_sum = gain_sum+customers[high];
        max_gain = max(gain_sum,max_gain);
    }
    ans = max_gain + ns;
    cout<<ans;
}