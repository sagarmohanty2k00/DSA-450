#include <iostream>
using namespace std;

void solve(string op, string ip, int i, int n){
	if(i == n){
		cout << op <<endl;
		return;
	}
	string op1 = op;
	string op2 = op;

	op2.push_back(ip[i]);
	i++;

	solve(op1, ip, i, n);
	solve(op2, ip, i, n);
}

int main(){
	string s; cin>>s;
	solve("", s, 0, s.length());
}

