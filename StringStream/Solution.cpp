// Problem link: https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem

#include <sstream>
#include <vector>
#include <iostream>
#include <string.h>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> res;
    stringstream ss(str);
    int num;
    char c;
    while(ss >> num) {
        res.push_back(num);
        ss >> c;
    }
    return res;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
