//LeetCode - 1544
#include<iostream>
#include<string> 
#include<stack>
using namespace std;
int main()
{
    stack<char> st;
    string s = "abBAcC";
    for(int i = 0;i<s.size();i++)
    {
        if(!st.empty() && (st.top() == s[i] - 32 || st.top() == s[i] + 32))
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    stack<char> rev;
    while(!st.empty())
    {
        rev.push(st.top());
        st.pop();
    }
    while(!rev.empty())
    {
        cout<<rev.top()<<" ";
        rev.pop();
    }
}