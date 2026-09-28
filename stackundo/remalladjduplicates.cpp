#include<iostream>
#include<stack> 
#include<string>
using namespace std;
int main()
{
    string s = "abbaca";
    stack<char> st;
    for(int i=0;i<s.size();i++)
    {
        if(!st.empty() && st.top()==s[i])
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    string res;
    while(!st.empty())
    {
        res.push_back(st.top());
        st.pop();
    }
    for(int i=0;i<res.size();i++)
        cout<<res[i]<< " ";
}