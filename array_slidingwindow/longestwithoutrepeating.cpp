//Leetcode - 3
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int high = 0,low = 0,count=0;
    unordered_map<char,int> um;
    while(high<s.length())
    {
        um[s[high]]++;
        while(um[s[high]]>1)
        {
            um[s[low]]--;
            if(um[s[low]]==0)
                um.erase(s[low]);
            low++;
        }
        count = max(count,high-low+1);
        high++;
    }
    cout<<high;
}