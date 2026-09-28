//LeetCode - 844
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    string s = "ab#c";
    string t = "ad#c";
    stack<char> s1 ;
    stack<char> s2;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i] == '#')
        {
            if(!s1.empty())
                s1.pop();
        }
        else
        {
            s1.push(s[i]);
        }
    }
    for(int i=0;i<t.size();i++)
    {
        if(t[i] == '#')
        {
            if(!s2.empty())
                s2.pop();
        }
        else
        {
            s2.push(t[i]);
        }
    }
    if(s1.size()!=s2.size())
    {
        cout<<"Not same";
        exit(0);
    }
    while(!s1.empty())
    {
        if(s1.top()==s2.top())
        {
            s1.pop();
            s2.pop();
        }
        else
        {
            cout<<"Both are not equal";
            exit(0);
        }
    }
    cout<<"Both are same";
}
