#include <bits/stdc++.h>
using namespace std;
int main()
{
    int COUNT = 0, count = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= 'A' and s[i] <= 'Z')
            COUNT++;
            else 
                count++;
    }
    if(COUNT > count)
        for(int i = 0; i < s.length(); i++)
            s[i] = toupper(s[i]);
    else 
        for(int i = 0; i < s.length(); i++)
            s[i] = tolower(s[i]);
    cout << s;
    return 0;
}