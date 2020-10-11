#include <bits/stdc++.h>
using namespace std;

 int solve(vector<int>& vi) {
        int len = vi.size();
        for(int i=0; i<len; i++){
                auto x = abs(vi[i]);
                if(x<len){
			if(vi[x]){
                        	vi[x] *= -1;
			}
			else{
				vi[x] -= len;
				if(vi[0] > 0){
					vi[0] *= -1;
				}
			}
                }

        }
        for(int i=0; i<len; i++){
                if(vi[i] >= 0){
                        //cout << i << "\n";
                        return i;
		}
        }
        return len;
    }


int main(){
	vector<int> vi;
	int size, ele; cin >> size;
	for(int i=0; i<size; i++){
		cin >> ele;
		vi.push_back(ele);
	}

	cout << solve(vi) << "\n";
}
