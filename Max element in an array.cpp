//link: https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-max-element/submissions/code/1354014251

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
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int big=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>big)
            big=a[i];
    }
    cout<<big;
    return 0;
}
