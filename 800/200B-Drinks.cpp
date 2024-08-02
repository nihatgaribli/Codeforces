#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,S = 0;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++)
    {
        cin >> m;
        vec[i] = m;
        S+=m;
    }
    cout << (double)S/n;
}