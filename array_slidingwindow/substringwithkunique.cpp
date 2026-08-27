// Longest Substring with K Uniques(GFG)
#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main()
{
    int k,i=0;
    cin>>k;
    string s;
    cin>>s;
    unordered_map<char,int> um;
    int high=0,low=0,res=0;
    for(high=0;high<s.length();high++)
    {   
        um[s[high]]++;
        while(um.size()>k)
        {
            um[s[low]]--;
            if(um[s[low]]==0)
            {
                um.erase(s[low]);
            }
            low++;
        }
        if(um.size()==k)
        {
            res=max(res,high-low+1);
        }
    }
    cout<<res;
}