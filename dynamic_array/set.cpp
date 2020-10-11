#include <bits/stdc++.h>
using namespace std;

int main() {
	set<int> s;

	s.insert(1);
	s.insert(1);
	s.insert(2);
	s.insert(3);

	cout << s.count(1) << "\n";
	//s.erase(1);

	for(int x: s)
		cout << x << "\t";
	cout << "\n";
}
