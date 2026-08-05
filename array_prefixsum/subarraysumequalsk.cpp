#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,i,j,count=0,target;
    cin>>n;
    cin>>target;
    vector<int> nums(n);
    for(i=0;i<n;i++)
        cin>>nums[i];
    for(i=0;i<n;i++)
    {
        int sum = 0;
        for(j=i;j<n;j++)
        {
            sum += nums[j];
            if(sum == target)
                count++;
        }
    }
    cout<<count;
}