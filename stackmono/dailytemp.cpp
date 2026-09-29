//LeetCode - 739
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main()
{
    vector<int> temp = {73,74,75,71,69,72,76,73};
    vector<int> res(temp.size(),0);
    stack<int> s;
    for(int i=0;i<temp.size();i++)
    {
        while(!s.empty() && temp[i] > temp[s.top()])
        {
            res[s.top()] = i - s.top();
            s.pop();
        }
        s.push(i);
    }
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
}