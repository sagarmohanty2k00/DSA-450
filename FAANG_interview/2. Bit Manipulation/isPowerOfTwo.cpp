// Monu is very weak in maths so kartik bhaiya gave him a simple task to check whether a given number n is a power of two.Help Monu and return boolean answer.

// Input Format
// Input a number n

// Constraints
// None

// Output Format
// Return true if n is is a power of two,else return false

// Sample Input
// 218
// Sample Output
// false
// Explanation
// None


// Apple Amazon Google


#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int counter = 0;
	string ans = "true";

	while(n > 0){
		if(n&1){
			counter++;
			if(counter > 2){
				ans = "false";
				break;
			}
		}

		n = n >> 1;
	}

	cout << ans;
}


