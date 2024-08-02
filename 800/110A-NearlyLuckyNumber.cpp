#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k = 0, n = 0, t = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '7')
            k++;
        else if(s[i] == '4')
            n++;
    }
    if (k + n == 7 or k + n == 4)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}