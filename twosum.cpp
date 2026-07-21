#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, target;
    cin >> n >> target;
    int i = 0,j = 0;
    vector<int> v(n);
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if(v[i]+v[j] == target && i!=j)
            {
                cout << i << ' ' << j;
                return 0;
            }
        }
    }
    cout << "Element not found";
}