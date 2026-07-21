#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int i = 0;
    for (int j = 0; j < v.size(); j++)
    {
        if (v[j] != 0)
        {
            swap(v[i], v[j]);
            i++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i];
    }
}