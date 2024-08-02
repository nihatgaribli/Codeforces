#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str = "";

    while(n > 1)
    {
        str += "that I love ";
        n--;
        if(n == 1)break;
        str += "that I hate ";
        n--; //if( n == 1 )break;
    }

    cout << "I hate " + str + "it";
}