// Problem link: https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a = 0;
    long b = 0l;
    char c = '\0';
    float d = 0.0f;
    double e = 0.0f;
    cin >> a >> b >> c >> d >> e;
    printf("%d\n%ld\n%c\n%f\n%lf", a, b, c, d, e);
    return 0;
}
