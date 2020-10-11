#include <bits/stdc++.h>
using namespace std;

int knapsack(int wt[], int val[], int n, int W) {
	if(n == 0 || W == 0) {
		return 0;
	}

	if(wt[n-1] > W) {
		return knapsack(wt, val, n-1, W);
	}
	else{
		return max(
		val[n-1]+knapsack(wt, val, n-1, W-wt[n-1]),
		knapsack(wt, val, n-1, W));
	}
}
int main() {
	int size; cin >> size;
	int wt[size], val[size], W;

	for(int i=0; i<size; i++) {
		cin >> wt[i] >> val[i] ;
	}
	cin >> W;
	int max_profit = knapsack(wt, val, size, W);
	cout << max_profit << "\n";
}
