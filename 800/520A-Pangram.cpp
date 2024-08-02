#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    set<char> s;

    if(n >= 26) // Check if n is at least 26 since we need all 26 letters
    {
        for(int i = 0; i < n; i++)
        {
            s.insert(toupper(str[i]));
        }
        if(s.size() == 26) 
            cout << "YES";
        else 
            cout << "NO";
    }
    else 
        cout <<"NO";
    return 0;
}
