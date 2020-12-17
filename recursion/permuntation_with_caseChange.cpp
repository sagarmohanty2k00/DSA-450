#include <iostream>
using namespace std;

void solve(string s, int i){
	if(i == s.length()){
		cout << s << endl;
		return;
	}

	string s1 = s;
	string s2 = s;

	int a = 0;
	while(a == 0){
		if(i == s.length()){
			cout << s << endl;
			return;
		}
		if(isalpha(s[i])){
			break;
		}
		i++;
	}


	if(isupper(s[i]))
		s1[i] = tolower(s1[i]);
	else
		s1[i] = toupper(s1[i]);
	i++;

	solve(s1, i);
	solve(s2, i);
}
int main(){
	string s; cin >> s;
	//s.push_back('\n');
	solve(s, 0);
}
