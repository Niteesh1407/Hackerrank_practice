//link: https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

CODE:

#include <bits/stdc++.h>

void update(int *a,int *b) {
    int *k;
    *k=*a;
    *a=*a+*b;
    *b=abs(*k-*b);    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
