#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1 , str2;
    getline(cin , str1);
    getline(cin , str2);

    for(int i = 0, j = 0; i < str1.length(), j < str2.length(); i++, j++)
    {
        if(str1[i] == str2[j]) cout << "0";
        else cout << "1";
    }
}