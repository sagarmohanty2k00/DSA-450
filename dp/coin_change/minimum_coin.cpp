#include <bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
typedef set<int> si;

vi v = {1, 2, 5, 10, 20, 50, 100, 500, 2000};
int INF = 999999999;

int solve(int a, int* best_arr, bool* ready) {
	int s = INF;

	if(a < 0) return s;
	if(a == 0) return 0;
	if(ready[a]) return best_arr[a];
	else{
		for(auto x:v) {
			s = min(s, solve(a-x, best_arr, ready)+1);
		}
		ready[a] = true;
		best_arr[a] = s;
		return s;
	}
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

	int s = solve(a, best_arr, ready);
	cout << s << "\n";
}
