#include <bits/stdc++.h>
using namespace std;

int arr[1000][1000];
//int ways[1000][1000];

long long int number_of_path(int n, int m, int a, int b, long long int ways[][1000]){
	if(a == n-1 && b == m-1){
		return 1;
	}
	else if(a == n || b == m){
		return 0;
	}
	else if(ways[a][b] != -1){
		return ways[a][b];
	}
	else{
		return ways[a][b] = number_of_path(n, m, a+1, b, ways) + number_of_path(n, m, a, b+1, ways);
	}
}

int main(){
	int t; cin >> t;
	int n, m;
	long long int ways[1000][1000];
	while(t--){
		cin >> n >> m;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				ways[i][j] = -1;
			}
		}
		long long int path = number_of_path(n, m, 0, 0, ways);
		cout << path << endl;
	}
}
