//link: https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-digits-in-a-string/problem

CODE:

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    int flag=0;
    cin>>s;
    for(size_t i=0;i<s.length();i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
