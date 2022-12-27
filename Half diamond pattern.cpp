//link: https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-print-half-diamond-pattern

CODE:

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    for(int i=1;i<n*2;i++)
    {
        int k;
        k=(i<=n)?i:n*2-i;
        for(int j=1;j<=k;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
