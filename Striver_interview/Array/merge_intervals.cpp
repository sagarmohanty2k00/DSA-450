#include <bits/stdc++.h>
using namespace std;

void solve(int arr[][2], int *n){
	int k = 0, j = 1, i = 0;
	while(j<*n && i<*n){
		if(arr[i][1] < arr[j][0]){
			i++;
			arr[i][0] = arr[j][0];
			arr[i][1] = arr[j][1];
		}
		else{
			arr[i][1] = arr[j][1];
		}
		j++;
	}
	*n = i+1;
}

int main(){
	int n; cin>>n;
	int arr[n][2] = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
	for(int i=0; i<n; i++){
		//cin >> arr[i][0] >> arr[i][0];
		;
	}

	solve(arr, &n);

	for(int i=0; i<n; i++){
		cout<<"["<<arr[i][0]<<", "<<arr[i][1]<<"], ";
	}
	cout<<"\b\n";
}
