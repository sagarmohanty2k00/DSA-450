#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

vi dp;
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
		//int m = arr.size();
		//int change[m];
		vi change;
		int i=0;
		for(int x : arr){
			if(n-x < 0)
				break;
			//cout << x << "\t";
			if(dp[n-x] == -1){
				dp[n-x] = solve(n-x, arr);
				//change[i] = dp[n-x] + 1;
			}
			change.push_back(dp[n-x] + 1);
			i++;
		}
		i++;
		cout << endl;
		return *min_element(change, change+i);
	}
}
int main(){
	int n; cin >> n;
	for(int i=0; i<=n; i++){
		dp.push_back(-1);
	}
	dp[0] = 0;
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
