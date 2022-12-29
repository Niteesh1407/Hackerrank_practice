//link: https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-vowels-in-a-string/problem

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
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'
          ||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            flag=1;
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
