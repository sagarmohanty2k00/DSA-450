#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int n){
	if(n == 0){
		return arr[0];
	}
	else{
		return arr[n] + sum(arr, n-1);
	}
}

int main(){
	int arr[10];
	cout << "Enter the elements: ";

	for(int i=0; i<10; i++){
		cin >> arr[i];
	
	}
	int s = sum(arr, 9);

	cout << s << endl;
}
