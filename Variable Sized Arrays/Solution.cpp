// Problem link: https://www.hackerrank.com/challenges/variable-sized-arrays/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<vector<int>> arr;
    int n = 0, q = 0;
    cin >> n >> q;
    for(int i = 0; i < n; i++) {
        int size = 0;
        cin >> size;
        arr.push_back(vector<int>());
        for(int j = 0; j < size; j++) {
            int num = 0;
            cin >> num;
            arr[i].push_back(num);
        }
    }
    for(int i = 0; i < q; i++) {
        int a = 0, b = 0;
        cin >> a >> b;
        cout << arr[a][b] << endl;
    }
    return 0;
}
