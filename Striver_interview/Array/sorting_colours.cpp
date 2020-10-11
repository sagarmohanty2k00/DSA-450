#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &vi){
	int len = vi.size();
	int j=0, item = -1;
	for(int i=0; i<3; i++){
		item++;
		for(int k=i; k<len; k++){
			if(vi[k] == item){
				vi[k] = vi[j];
				vi[j] = item;
				j++;
			}
		}
	}
	for(int x : vi){
		cout << x << " ";
	}
	cout<<"\n";
}

int main(){
	vector<int> vi;
	int size, ele; cin >> size;
	for(int i=0; i<size; i++){
		cin >> ele;
		vi.push_back(ele);
	}

	solve(vi);
}
