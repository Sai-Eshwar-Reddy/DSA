//Leetcode - 424
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    int count=0;
    int high=0,low=0,max_freq=0,ans=0;
    vector<int>num(26,0);
    for(high=0;high<s.length();high++)
    {
        num[s[high]-'A']++;
        max_freq = max(max_freq,num[s[high]-'A']);
        while((high-low+1)-max_freq>k)
        {
            num[s[low]-'A']--;
            low++;
        }
        ans = max(ans,high-low+1);
    }
    cout<<ans;
}