// Problem link: https://www.hackerrank.com/challenges/c-tutorial-pointer/problem

#include <stdio.h>
#include <cmath>

void update(int *a,int *b) {
    // Complete this function
    int n1 = *a;
    int n2 = *b;
    *a = n1 + n2;
    *b = std::abs(n1 - n2);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
