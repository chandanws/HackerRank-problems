// Problem link: https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int lines = 0;
    long phoneNumber = 0;
    string name = "";
    cin >> lines;
    cin.ignore();
    map <string, long> phoneBook;
    for(int i = 0; i < lines; i++) {
        cin >> name;
        cin >> phoneNumber;
        phoneBook[name] = phoneNumber;
    }
    while(cin >> name) {
        if (phoneBook.find(name) != phoneBook.end()) {
            printf("%s=%d\n", name.c_str(), phoneBook[name]);
        } else {
            cout << "Not found" << endl;
        }
    }
    return 0;
}
