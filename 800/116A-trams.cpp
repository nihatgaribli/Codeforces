#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, S = 0, max = 0;
    cin >> n;
    vector<vector<int>> vec(n, vector<int>(2));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
            cin >> vec[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        S = S - vec[i][0] + vec[i][1];
        if (S > max)
            max = S;
    }
    cout << max;
    return 0;
}