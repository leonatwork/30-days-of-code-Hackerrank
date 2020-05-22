#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string s;
    while (n > 0)
    {
        s.push_back(n % 2 + '0');
        n /= 2;
    }
    bool f = false;
    int cnt = 0, maxcnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (!f && s[i] == '1')
        {
            f = true;
        }
        if (f && s[i] == '0')
        {
            f = false;
            cnt = 0;
        }
        if (f && s[i] == '1')
        {
            cnt++;
            maxcnt = max(maxcnt, cnt);
        }
    }
    cout << maxcnt;
    return 0;
}
