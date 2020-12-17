#include <bits/stdc++.h>
using namespace std;

typedef vector<string> vs;

vs vstring;
void solve(string str, int open, int close){
	if(open == close && open == 0){
		//vstring.clear();
		vstring.push_back(str);
		return;
	}

	string s1 = str;
	string s2 = str;

	if(open != 0){
		//i++;
		//open++;
		s1.push_back('(');
		solve(s1, open-1, close);
	}

	if(close != 0 && open < close){
		//i++;
		//close++; 
		s2.push_back(')');
		solve(s2, open, close-1);
	}
	return;

}
int main(){
	int n; cin >> n;
	solve("", n, n);

	for(auto s: vstring){
		cout << s << endl;
	}
}
