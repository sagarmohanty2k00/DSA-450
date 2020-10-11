#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> v;

	v.push_back(3);
	v.push_back(2);
	v.push_back(5);

	cout << v[0] << " " << v[1] << " " << v[2] << "\n";
	sort(v.begin(), v.end());

	//cout << v[0] << " " << v[1] << " " << v[2] << "\n";
	int i = 0;
	for(i=0; i<v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << "\n";

	cout << v.back() << "\n";
	v.pop_back();
	cout << v.back() << "\n";
}
