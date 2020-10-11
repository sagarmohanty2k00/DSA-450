#include <bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
typedef set<int> si;

vi v = {1, 2, 5, 10, 20, 50, 100, 500, 2000};
int INF = 999999999;

void solve(int a, int* best_arr, bool* ready) {
	int value[a+1];
	int minimum[a+1];

	value[0] = 0;
	for(int i=1; i<=a; i++){
		value[i] = INF;
		minimum[i] = 0;
		for(auto x :v) {
			if(i-x>=0 && value[i] > value[i-x]+1) {
				value[i] = value[i-x] + 1;
				minimum[i] = x;
			}
		}
	}
	cout << "Minimum " << value[a] << " number of coins are required: \n";
	for(int i=0; i<=a; i++) {
		if(minimum[i] != 0) {
			cout << minimum[i] << "\t";
		}
	}
	cout << "\n";

}

int main() {
	//v = {1, 2, 5, 10, 20, 50, 100};
	int a;
	cout << "Enter any amount : ";
	cin >> a;
	int best_arr[a+1];
	bool ready[a+1];
	for(int i=0; i<=a; i++){
		best_arr[i] = 0;
		ready[i] = false;
	}

	solve(a, best_arr, ready);
}
