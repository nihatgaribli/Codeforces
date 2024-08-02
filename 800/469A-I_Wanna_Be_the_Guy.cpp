#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, m;
    cin >> n >> p;

    set<int> levels;

    for (int i = 0; i < p; ++i)
    {
        cin >> m;
        levels.insert(m);
    }

    cin >> p;
    for (int i = 0; i < p; ++i)
    {
        cin >> m;
        levels.insert(m);
    }

    bool allLevels = true;
    for (int i = 1; i <= n; ++i)
    {
        if (levels.find(i) == levels.end())
        {
            allLevels = false;
            break;
        }
    }

    if (allLevels)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}