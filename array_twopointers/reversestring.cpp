#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int i=0,j=s.length();
    while (i<j)
    {
        swap(s[i],s[j]);
        i++,j--;
    }
    for(i=0;i<=s.length();i++)
    {
        cout<<s[i];
    }
}