//Leetcode - 1186
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr = {1,-2,-2,3};
    int res = arr[0],best = arr[0];
    int nodelete = arr[0],onedelete = INT_MIN;
    for(int i=1;i<arr.size();i++)
    {
        int prevnodelete = nodelete;
        int prevonedelete = onedelete;
        nodelete = max(nodelete +arr[i],arr[i]);
        int v2;
        if(onedelete == INT_MIN)
            v2 = prevnodelete;
        else
            v2 = prevonedelete + arr[i];
        onedelete = max(v2,prevnodelete);
        res = max(res,max(nodelete,onedelete));
    }
    cout<<res;
}