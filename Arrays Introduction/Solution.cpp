// Problem link: https://www.hackerrank.com/challenges/arrays-introduction/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[n - i - 1];
    }
    for(int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if(i + 1 < n) printf(" ");
    }
    return 0;
}
