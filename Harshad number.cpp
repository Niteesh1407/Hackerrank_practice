//link:  https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-harshad-number

CODE:

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long n;
    cin>>n;
    long k=n,s=0;
    while(n)
    {
        int r=n%10;
        s=s+r;
        n=n/10;
    }
    if(k%s==0)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
