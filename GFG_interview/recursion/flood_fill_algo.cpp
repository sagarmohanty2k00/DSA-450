#include <bits/stdc++.h>
using namespace std;


vector<vector<int>>  arr;
vector<int> ele_arr;

void solve(int n, int m, int x, int y, int k, int prev){
    if(x >= n || x < 0 || y >= m || y < 0)
	    return;
    //cout << "Entered into the recurssive code...." << x << y << endl;
    //int prev = arr[x][y];
    arr[x][y] = k;
    if(x < n-1)
	    if(arr[x+1][y] == prev){
		cout << "Down\n";
	    	solve(n, m, x+1, y, k, prev);
	    }
    if(y < m-1)
	    if(arr[x][y+1] == prev){
		cout<<"Right\n";
	    	solve(n, m, x, y+1, k, prev);
	    }
    if(x > 0)
	    if(arr[x-1][y] == prev){
		cout<<"Up\n";
	    	solve(n, m, x-1, y, k, prev);
	    }
    if(y > 0)
	    if(arr[x][y-1] == prev){
		cout<<"Left\n";
        	solve(n, m, x, y-1, k, prev);
	    }
        
        
    //arr[x][y] = k;
}

int main() {
	//code
	int t; cin >> t;
	while(t--){
	    //vii arr;
	    //vi ele_arr;
	    int n, m, ele;
	    cin >>n>>m;
	    for(int i=0; i<n; i++){
		ele_arr.clear();
	        for(int j=0; j<m; j++){
	            cin >> ele;
		    ele_arr.push_back(ele);
	        }
		arr.push_back(ele_arr);
	    }
	    int x, y, k;
	    cin >> x >> y >> k;
	    solve(n, m, x, y, k, arr[x][y]);
	    
	    for(int i=0; i<n; i++){
	        for(auto x: arr[i]){
	            cout << x << " ";
	        }
	    }
	}
	return 0;
}
