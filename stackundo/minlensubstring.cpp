//LeetCode - 2696
#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
    string s = "ACBBD";
    stack<char> st;
    for(int i=0;i<s.size();i++)
    {
        if(!st.empty() && (st.top() == 'A' && s[i] == 'B' || st.top() == 'C' && s[i] =='D'))
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
    cout<<rev.size();
}