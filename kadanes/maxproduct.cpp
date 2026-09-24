#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums = {-2,0,-1};
    int min_prod = nums[0],max_prod = nums[0],res = nums[0];
    for(int i=1;i<nums.size();i++)
    {
        int v1 = nums[i];
        int v2 = min_prod * nums[i];
        int v3 = max_prod * nums[i];
        min_prod = min(v1,min(v2,v3));
        max_prod = max(v1,max(v2,v3));
        res = max(res,max(min_prod,max_prod));
    }
    cout<<res;
}