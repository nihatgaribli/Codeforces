#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    if(str.length() == 1) cout << str;
    else{
    for(int i = 0; i < str.length()-2;i+=2)
    {
        for(int j = i+2; j < str.length();j+=2)
        if(str[i]>str[j])
        {
            swap(str[i],str[j]);
        }
    }
    cout << str;
    }
}