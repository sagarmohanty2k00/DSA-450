#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int maximum = 99999;
int solve(int n, vi& arr){
	if(n==1){
		return 1;
	}
	if(n==0){
		return 0;
	}
	if(n<0){
		return maximum;
	}
	else{
		int m = arr.size();
		int change[m];
		int i=0;
		for(int x : arr){
			cout << x << "\t";
			change[i] = solve(n-x, arr) + 1;
			i++;
		}
		cout << endl;
		return *min_element(change, change+m);
	}
}
int main(){
	int n; cin >> n;
	vi arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(5);
	arr.push_back(10);
	arr.push_back(20);
	arr.push_back(50);
	arr.push_back(100);
	arr.push_back(200);
	arr.push_back(500);
	arr.push_back(2000);


	int sol = solve(n, arr);
	cout << "\n Ans: " << sol << "\n";
}
