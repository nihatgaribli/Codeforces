#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n , k , count = 0;
    cin >> n >> k ;
    vector<int> vec(n) ;
    for(int i = 1 ; i <= n ; i++)
    cin >> vec[i] ;
    if(vec[0] != 0 and vec[1] == vec[n]) cout<< n ;
    else 
    {for(int i = 1 ; i <= n ; i++)
    {
        if(vec[i]>0 and vec[i] >= vec[k] ) count++ ;
        else break;
    }
    cout << count ;
    }
    return 0 ;
}