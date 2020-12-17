// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++


class Solution{
static unsigned long long int buffer, copy_buffer, temp_buffer;
public:
    
    unsigned long long int optimalKeys(int N){
        // code here
        unsigned long long int A = 0;
        if(N<1){
            return 0;
        }
        unsigned long long int arr[4];
        
        buffer = optimalKeys(N-1);
        arr[0] = 1 + buffer;
        
        temp_buffer = copy_buffer;
	buffer = optimalKeys(N-1);
        arr[1] = buffer;
        
	copy_buffer = buffer;
	buffer = optimalKeys(N-1);
	cout<<"copy_buffer : "<<copy_buffer<<endl;
        arr[2] = buffer;
        
        copy_buffer = temp_buffer;
	buffer = optimalKeys(N-1);
	cout <<"temp_value : "<<temp_buffer<<endl;
        arr[3] = buffer + copy_buffer;

	return *max_element(arr, arr+4);
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.optimalKeys(N)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
