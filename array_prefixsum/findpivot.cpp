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
    vector<int> leftsum(n),rightsum(n);
    leftsum[0]=nums[0];
    for(i=1;i<n;i++)
    {
        leftsum[i]=leftsum[i-1]+nums[i];
    }
    rightsum[n-1]=nums[n-1];
    for(i=n-2;i>=0;i--)
    {
        rightsum[i]=rightsum[i+1]+nums[i];
    }
    for(i=0;i<n;i++)
    {
        if(leftsum[i]==rightsum[i])
        {
            cout<<i<<" ";
            return 0;
        }
    }
    cout<<"-1";
}