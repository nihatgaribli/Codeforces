#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    set<char>st;
    for(char c : str)
        st.insert(c);
    if(st.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else 
        cout << "IGNORE HIM!";
    return 0;
}