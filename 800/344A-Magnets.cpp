#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i <n; i++)
    {
        cin >> a[i];
    }
    int k = 1;
    for(int i = 0; i <n-1; i++)
    {
        if(a[i] != a[i+1]) k++;
    }
    cout << k;
}