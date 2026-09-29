
#include<iostream>
#include<vector>
#include<stack> 
using namespace std;
int main()
{
    vector <int> arr = {1,3,2,4};
    stack<int> s;
    vector<int> res(arr.size(),-1);
    for(int i=0;i<arr.size();i++)
    {
        while(!s.empty() && arr[i]>arr[s.top()])
        {
            res[s.top()] = arr[i];
            s.pop();
        }
        s.push(i);
    }
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
}