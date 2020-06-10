#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int n;
    string s, p;
    cin >> n;
    map<string, string> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> p;
        mp[s] = p;
    }
    while (cin >> s)
    {
        if (mp.count(s))
        {
            cout << s << "=" << mp[s] << "\n";
        }
        else
        {
            cout << "Not found\n";
        }
    }
    return 0;
}
