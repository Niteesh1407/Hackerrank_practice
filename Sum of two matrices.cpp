//link: https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-sum-of-two-matrices/submissions/code/1354013900

CODE:

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {int k;
         cin>>k;
         a[i][j]=a[i][j]+k;}
    for(int i=0;i<n;i++)
    {for(int j=0;j<m;j++)
            cout<<a[i][j]<<" ";
    cout<<endl;}
    return 0;
}
