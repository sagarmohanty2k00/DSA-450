// Supposed to be solved in kadane's method but it is my algorithm and it is much faster than the kadanes algorithm......^_^    
// or maybe its an advanced version of kadane's algo 

#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n){
	int gi=0, li=0, gj=0, lj=0;
	int gmax = arr[0];
	int lmax = arr[0];

	for(int i=1; i<n; i++){
		if(arr[i] < lmax+arr[i]){
			lj++;
			lmax = lmax+arr[i];

			if(lmax>gmax){
				gmax = lmax;
				gj = lj;
				gi = li;
			}
		}
		else{
			li = lj = i;
			lmax = arr[i];
			
			if(lmax > gmax){
				gmax = lmax;
				gi = gj = i;
			}
		}

	}

	for(int i=gi; i<=gj; i++){
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int main(){
	int size; cin >> size;
	int arr[size];

	for(int i=0; i<size; i++){
		cin >> arr[i];
	}

	solve(arr, size);
}
