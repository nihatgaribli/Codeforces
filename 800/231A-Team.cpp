#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = 0, count = 0;
    vector<vector<int>> vec(n, vector<int>(3));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> vec[i][j];
            if (vec[i][j] == 1)
                k++;
        }
        if (k >= 2)
            count++;
            k = 0 ;
    }
    cout << count ;
    return 0 ;
}