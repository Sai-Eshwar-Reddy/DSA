#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int left=0,right=n-1,maxarea=0;
    while(left<right)
    {
        int area = min(nums[left],nums[right]) * (right - left);
        maxarea = max(area,maxarea);
        if(nums[left]<nums[right])
        {
            left++;
        }
        else
            right--;
    }
    cout<<maxarea;
}