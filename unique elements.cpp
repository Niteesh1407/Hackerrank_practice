//link: https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-print-unique-elements-of-array/submissions/code/1354057455

CODE:

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,count;
    cin>>n;
    int a[n];
    vector<int>r;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            r.push_back(a[i]);
        }
    }
    for(size_t i=0;i<r.size();i++)
        cout<<r[i]<<" ";
    return 0;
}
