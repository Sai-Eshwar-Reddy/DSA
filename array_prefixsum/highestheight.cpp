#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    vector<int>nums(n),leftsum(n);
    for(i=0;i<n;i++)
        cin>>nums[i];
    leftsum[0]=nums[0];
    for(i=1;i<n;i++)
        leftsum[i]=leftsum[i-1]+nums[i];
    int largest=leftsum[0];
    for(i=1;i<n;i++)
    {
        if(leftsum[i]>largest)
            largest=leftsum[i];
    }  
    if(largest<0)
        cout<<"0";
    else
        cout<<largest;

}
