#include <bits/stdc++.h>
using namespace std;

vector<string> vstring;

void solve(int n, int one, int zero, string str, int count){
	cout << "entered " << count << endl;
	if(one+zero == n){
		vstring.push_back(str);
		return;
	}

	string s1 = str;
	string s2 = str;

	s1.push_back('1');
	solve(n, one+1, zero, s1, count+1);

	if(zero < one){
		s2.push_back('0');
		solve(n, one, zero+1, s2, count+1);
	}

	return;
}
int main(){
	int n;cin >> n;
	solve(n, 0, 0, "", 1);

	for(auto x : vstring){
		cout << x << endl;
	}
}
