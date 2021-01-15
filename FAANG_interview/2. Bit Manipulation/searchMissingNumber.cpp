// Given an array containing n distinct numbers taken from 0, 1, 2, …, n. Find the one that is missing from the array.

// Input Format
// First line contains integer n as size of array. Next n lines contains a single integer as element of array.

// Constraints
// Your algorithm should run in linear runtime complexity. Could you implement it using only constant extra space complexity.

// Output Format
// Print the required output.

// Sample Input
// 3
// 3 0 1
// Sample Output
// 2




// FAANG

#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int a = n;
	int b = 0;

	int v;
	for(int i=0; i<n; i++){
		cin >> v;

		a = a^i;
		b = b^v;
	}

	cout << (a^b);
}



