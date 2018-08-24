// Problem link: https://www.hackerrank.com/challenges/cpp-lower-bound/problem

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
    int num_of_queries = 0;
    cin >> num_of_queries;
    for(int i = 0; i < num_of_queries; i++) {
        int target = 0;
        cin >> target;
        std::vector<int>::iterator low = lower_bound(arr.begin(), arr.end(), target);
        if(arr[(low - arr.begin())] == target) {
            cout << "Yes ";
        } else {
            cout << "No ";
        }
        cout << (low - arr.begin()) + 1 << endl;
    }
    return 0;
}
