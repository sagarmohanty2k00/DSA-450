#include <bits/stdc++.h>
using namespace std;

void swap_stack(char *s1, int j, char *s2, int k){
	while(j--){
		s2[k] = s1[j];
		//j++;
		k++;
	}
}

void Print(char* s, int n){
	while(n--){
		if(n!=0)
			cout<<s[n];
	}
	cout<<"\n";
}

void solve(string ss){
	//char stack1[100], stack2[100];
	int l = ss.size();
	char stack1[l], stack2[l];
	int i = 0;
	int j=0, k=0;
	while(i<l){
		if(ss[i] == '.' || i==l-1){
			stack1[j] = ss[i];
			j++;
			if(i == l-1){
				stack1[j] = '.';
				j++;
			}
			swap_stack(stack1, j, stack2, k);
			k += j;
			j = 0;
		}

		else{
			stack1[j] = ss[i];
			j++;
		}
		i++;
	}

	Print(stack2, k);
}

int main(){
	int t; cin >> t;
	while(t--){
		string ss;
		cin >> ss;
		solve(ss);
	}
	return 0;
}
