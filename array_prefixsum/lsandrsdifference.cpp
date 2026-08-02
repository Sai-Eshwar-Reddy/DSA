#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,i=0;
    cin>>n;
    vector<int> res(n),nums(n),leftsum(n),rightsum(n);
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    leftsum[0]=nums[0];
    rightsum[n-1]=nums[n-1];
    for(i=1;i<n;i++)
        leftsum[i]=leftsum[i-1]+nums[i];
    for(i=n-2;i>=0;i--)
        rightsum[i]=rightsum[i+1]+nums[i];
    for(i=0;i<n;i++)
    {
        res[i]=leftsum[i]-rightsum[i];
        if(res[i]<0)
            res[i]=res[i]*-1;
    }
    for(i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }
}