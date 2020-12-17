// Tower of Hanoi - Recursive solution
// By Sagar Mohanty
#include <bits/stdc++.h>
using namespace std;

long long int sol[100];
long long int solve(int n, string s, string h, string d, long long int step){
	if(n == 1){
		step += 1;
		//cout << "One plate moved from \"" << s << "\" to \"" << d << "\"\n";
	}
	else{
		if(sol[n-1] == -1){
			sol[n-1] = solve(n-1, s, d, h, step);
		}
		step += sol[n-1];
		//solve(1, s, h, step);
		step += 1;
		step += sol[n-1];
	}
	return step;
}

int main(){
	int n;
	string s="source", h="helper", d="destination";
	cin >> n;
	for(int i=0; i<=n; i++){
		sol[i] = -1;
	}
	int number_of_steps=0;
	long long int sol = solve(n, s, h, d, 0);

	cout << "The total number of steps taken to move \"" << n << "\" number of plates is : " << sol << " .\n";
}
