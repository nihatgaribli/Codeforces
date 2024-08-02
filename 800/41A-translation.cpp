#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    bool n = true;
    cin >> s >> t;
    for(int i=0, j=t.length()-1; i<s.length(), j>=0; i++, j--)
    if(s[i] != t[j]) n=false;
    if(n == false) cout<< "NO";
    else cout<< "YES";
    return 0;
}