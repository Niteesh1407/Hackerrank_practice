//link: https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-sum-of-odd-elements/submissions/code/1354012912

CODE:

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        if(a[i]%2!=0)
            sum+=a[i];
    cout<<sum;
    return 0;
}
