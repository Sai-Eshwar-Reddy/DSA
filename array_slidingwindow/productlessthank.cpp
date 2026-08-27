//Leetcode - 713
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int high=0,low=0,size,k,product=1,count=0;
    cin>>size>>k;
    vector<int>nums(size);
    for(high=0;high<size;high++)
    {
        cin>>nums[high];
    }
    if(k<=1)
    {
        cout<<"0";
        return 0;
    }
    high=0;
    while(high<nums.size())
    {
        product = product * nums[high];
        while(product>=k)
        {
            product = product / nums[low];
            low++;
        }
        count = count + (high-low+1);
        high++;
    }
    cout<<count;
}