//link:  https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-compute-n/submissions/code/1354107690

CODE:

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k=1;
    cin>>n;
    for(int i=2;i<=n;i++)
        k=k*i;
    cout<<k;
    return 0;
}
