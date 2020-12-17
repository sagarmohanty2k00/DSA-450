#include <bits/stdc++.h>
using namespace std;


int solve(int n, int arr[], int i, int sol[]){
	if(i == n-1){
		int sum = 0;
		for(int j=1; j<n; j++){
			sum += abs(arr[i] - arr[i-1]);
		}

		return sum;
	}
	
	int sum = 0;
	sol[i] = 1;
	sum = solve(n, arr, i+1, sol);
	for(int a=2; a<=arr[i]; a++){
		sol[i] = a;
		sum = max(sum, solve(n, arr, i+1, sol));
	}

	return sum;
}


int main(){
	int t; cin >> t;

	while(t--){
		int n; cin >> n;
		int arr[n];

		for(int i=0; i<n; i++){
			cin >> arr[i];
		}

		int sol_arr[n];
		cout << solve(n, arr, 0, sol_arr) << endl;
	}
}
