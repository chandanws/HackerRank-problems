// Problem link: https://www.hackerrank.com/challenges/deque-stl/problem

#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    deque<int> dq;
    int i = 0;
    while(i < k) {
        while(!dq.empty() && arr[i] >= arr[dq.back()]) {
            dq.pop_back();
        }
        dq.push_back(i);
        i++;
    }
    while(i <= n) {
        printf("%d", arr[dq.front()]);
        if(i + 1 <= n) printf(" ");
        while(!dq.empty() && dq.front() < (i - k + 1)) {
            dq.pop_front();
        }
        while(!dq.empty() && arr[i] >= arr[dq.back()]) {
            dq.pop_back();
        }
        dq.push_back(i);
        i++;
    }
    printf("\n");
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
