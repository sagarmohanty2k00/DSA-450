#include <bits/stdc++.h>
using namespace std;

void reverseArray(int *arr, int i, int n){
	if(i == n){
		cout << arr[i];
	}
	else{
		reverseArray(arr, i+1, n);
		cout << " " << arr[i];
	}
}

int main(){
	int arr[10]; 
	cout << "Enter the array to reverse : \n";

	for(int i=0; i<10; i++){
		cin >> arr[i];
	}
	reverseArray(arr, 0, 9);

	cout << "\n";
}
