// Problem link: https://www.hackerrank.com/challenges/vector-sort/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size = 0;
    cin >> size;
    vector<int> arr;
    for(int i = 0; i < size; i++) {
        int num = 0;
        cin >> num;
        arr.push_back(num);
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if(i + 1 < size) printf(" ");
    }
    return 0;
}
