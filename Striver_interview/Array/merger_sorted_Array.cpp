#include <bits/stdc++.h>
using namespace std;


void solve(int num1[], int num2[], int m, int n){
	int i=0, j=0, k=1;
	while(i<m){
		if(num1[i] > num2[j]){
			if(num2[j] > num2[k]){
				int temp = num1[i];
				num1[i] = num2[k];
				num2[k] = num2[j];
				num2[j] = temp;
			}
			else{
				int temp = num1[i];
				num1[i] = num2[j];
				num2[j] = temp;
			}
			//i++;
		}
		i++;
		//else
	}
	sort(num2, num2+1);
	for(int j=0; j<n; j++){
		num1[i] = num2[j];
		i++;
	}

	for(int i=0; i<(m+n); i++){
		cout << num1[i]<<" ";
	}
}

int main(){
	int m, n; cin >> m >> n;
	int num1[m+n];
	int num2[n];
	for(int i=0; i<m; i++){
		cin >> num1[i];
	}
	for(int i=0; i<n; i++){
		cin >> num2[i];
	}

	solve(num1, num2, m, n);
}
