//LeetCode - 1475
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main()
{
    vector<int> prices = {8,4,6,2,3};
    vector<int> res = prices;
    stack<int> s;
    for(int i=0;i<prices.size();i++)
    {
        while(!s.empty() && prices[s.top()] >= prices[i])
        {
            res[s.top()] = prices[s.top()] - prices[i];
            s.pop();
        }
        s.push(i);
    }
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<< " ";
    }
    return 0;
}