#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int size1,size2;
    cin>>size1>>size2;
    vector<int> nums1(size1),nums2(size2),ans;
    int i=0;
    for(int i=0;i<nums1.size();i++)
    {
        cin>>nums1[i];
    }
    for(int i=0;i<nums2.size();i++)
    {
        cin>>nums2[i];
    }
    int n,m;
    cin>>m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        nums1[m+i]=nums2[i];
    }
    sort(nums1.begin(),nums1.end());
    for(int i=0;i<nums1.size();i++)
    {
        cout<<nums1[i]<<" ";
    }
    
}