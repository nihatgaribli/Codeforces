#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p;
    set<int> s;

    for(int i = 0; i < 4; i++)
    {
        cin >> p;
        s.insert(p);
    }

    cout << 4 - s.size();
}