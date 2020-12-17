#include <bits/stdc++.h>
using namespace std;

int solve(int arr1[], int arr2[], int k, int size){
	if(k == size){
		int val = 0;
		for(int i=1; i<k; i++){
			val += abs(arr2[i] - arr2[i-1]);
		}

		return val;
	}

	int m = -1;
	for(int i=1; i<=arr1[k]; i++){
		arr2[k] = i;
		m = max(m, solve(arr1, arr2, k+1, size));
	}
	/*for(int i=0; i<k; i++)
		cout << arr2[i] << "  ";
	cout << endl;*/
	return m;
}

int main(){
	int t;
	cin >> t;

	while(t--){
		int size;cin >> size;
		int arr1[size];
		int arr2[size];
		for(int i=0; i<size; i++){
			cin >> arr1[i];
		}
		int ans = solve(arr1, arr2, 0, size);
		
		cout << ans << endl;
	}
}
