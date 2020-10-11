/* A simple program to print subarray  
with sum as given sum */
#include <bits/stdc++.h> 
using namespace std; 
  
/* Returns true if the there is a subarray  
of arr[] with sum equal to 'sum' otherwise  
returns false. Also, prints the result */
int subArraySum(int arr[], int n, int sum) 
{ 
    int curr_sum, i, j; 
  
    // Pick a starting point 
    for (i = 0; i < n; i++) { 
        curr_sum = arr[i]; 
  
        // try all subarrays starting with 'i' 
        for (j = i + 1; j <= n; j++) { 
            if (curr_sum == sum) { 
                cout << i+1 << " " << j << "\n"; 
                return 1; 
            } 
            if (curr_sum > sum || j == n) 
                break; 
            curr_sum = curr_sum + arr[j]; 
        } 
    } 
  
    cout << "No subarray found"; 
    return 0; 
} 


// Taking the array input
void input(int* arr, int n){
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
}


// Driver Code 
int main() 
{ 
    int t; cin >> t;
    while(t--){
    	int n, sum;
	cin >> n >> sum;
	int arr[n];
	input(arr, n);
	subArraySum(arr, n, sum);
    }
    //subArraySum(arr, n, sum); 
    return 0; 
} 
