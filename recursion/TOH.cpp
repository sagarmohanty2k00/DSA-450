// Tower of Hanoi - Recursive solution
// By Sagar Mohanty
#include <bits/stdc++.h>
using namespace std;

void solve(int n, string s, string h, string d, int* step){
	if(n == 1){
		*step += 1;
		cout << "One plate moved from \"" << s << "\" to \"" << d << "\"\n";
		return;
	}
	else{
		solve(n-1, s, d, h, step);
		solve(1, s, h, d, step);
		solve(n-1, h, d, s, step);
	}
}

int main(){
	int n;
	string s="source", h="helper", d="destination";
	cin >> n;
	int number_of_steps=0;
	solve(n, s, h, d, &number_of_steps);

	cout << "The total number of steps taken to move \"" << n << "\" number of plates is : " << number_of_steps << " .\n";
}
