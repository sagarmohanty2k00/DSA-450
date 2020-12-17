#include <iostream>
using namespace std;

void solve(string s, int i){
	if(i == s.length()){
		cout << s << endl;
		return;
	}

	string s1 = s;
	string s2 = s;

	s2.insert(i, " ");
	i++;
	solve(s1, i);
	i++;
	solve(s2, i);
}
int main(){
	string s; cin >> s;
	//s.push_back('\n');
	solve(s, 1);
}
