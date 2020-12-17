#include <iostream>
using namespace std;

int solve(int arr[], int n){
    if(n == 0){
        return arr[n];
    }
    
    int max = solve(arr, n-1);
    
    if(arr[n] > max+arr[n]){
        return arr[n];
    }
    
    
    return max+arr[n];
}

int main() {
	//code
	int t; cin >> t;
	while(t--){
	    int n; cin >> n;
	    int arr[n];
	    
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	    }
	    
	    cout << solve(arr, n-1) << endl;
	}
	return 0;
}
