//link:  https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-right-angled-triangle-pattern-2

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
    int k=1;
    for(int i=1;i<=n;i++)
    {
        int k=i;
        for(int j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k=k+(n-j);
        }
        cout<<"\n";
    }
    return 0;
}
