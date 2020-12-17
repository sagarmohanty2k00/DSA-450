// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
  public:
    int minOperation(int n)
    {
        //code here.
	int arr[n+1];
	arr[0] = 0;

        for(int i=1; i<=n; i++){
		if(i%2 == 0){
			arr[i] = 1 + min(arr[i-1], arr[i/2]);
		}
		else{
			arr[i] = 1 + arr[i-1];
		}
	}

	return arr[n];
    } 
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    }
}  // } Driver Code Ends
