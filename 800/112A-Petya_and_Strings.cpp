#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k = 0;
    string str1, str2;
    cin >> str1 >> str2;
    for (int i = 0; i < str1.length(); i++)
    {
        str1[i] = toupper(str1[i]);
        str2[i] = toupper(str2[i]);
    }
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] == str2[i])
            k = 0;
        else if (str1[i] > str2[i])
        {
            k = 1;
            break;
        }
        else if (str1[i] < str2[i])
        {
            k = -1;
            break;
        }
    }
    cout << k;
}