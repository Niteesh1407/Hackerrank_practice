//link: https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true&h_r=next-challenge&h_v=zen

CODE:

#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a,int b,int c,int d)
{
    int big;
    if(a>b && a>c && a>d)
    big=a;
    else if(b>c && b>d)
    big=b;
    else if(c>d)
    big=c;
    else
    big=d;
    return big;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
