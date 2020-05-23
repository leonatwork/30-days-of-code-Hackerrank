#include <bits/stdc++.h>

using namespace std;

int sumOfHourGlass(vector<vector<int>> h, int i, int j)
{
    return h[i][j] + h[i][j + 1] + h[i][j + 2] +
           h[i + 1][j + 1] +
           h[i + 2][j] + h[i + 2][j + 1] + h[i + 2][j + 2];
}

int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++)
    {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int sum = INT_MIN;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum = max(sum, sumOfHourGlass(arr, i, j));
        }
    }
    cout << sum;
    return 0;
}
