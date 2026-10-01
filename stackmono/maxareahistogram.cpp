//LeetCode - 84
#include<iostream>
#include<vector> 
#include<stack> 
using namespace std;
int main()
{
    vector<int> height = {2,1,5,6,2,3};
    stack<int> s;
    int max_area = 0;
    for(int i=0;i<=height.size();i++)
    {
        int ch;
        if(i == height.size())
            ch = 0;
        else 
            ch = height[i];
        while(!s.empty() && ch < height[s.top()])
        {
            int h = height[s.top()];
            s.pop();
            int w;
            if(!s.empty())
                w = i - s.top() -1;
            else
                w = i;
            int area = h * w;
            max_area = max(max_area,area);
        }
        if(i<height.size())
            s.push(i);
    }
    cout<<max_area;
}