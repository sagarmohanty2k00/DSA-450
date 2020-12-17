// You are given a one dimensional array that may contain both positive and negative integers, find the sum of contiguous subarray of numbers which has the largest sum. For example, if the given array is {-2, -5, 6, -2, -3, 1, 5, -6}, then the maximum subarray sum is 7.

// Input Format
// The first line consists of number of test cases T. Each test case consists of two lines.
// The first line of each testcase contains a single integer N denoting the number of elements for the array A.
// The second line of each testcase contains N space separated integers denoting the elements of the array.

// Constraints
// 1 <= N <= 100000

// 1 <= t <= 20

// -100000000 <= A[i] <= 100000000

// Output Format
// Output a single integer denoting the maximum subarray sum for each testcase in a new line.

// Sample Input
// 2
// 4
// 1 2 3 4
// 3
// -10 5 10
// Sample Output
// 10
// 15
// Explanation
// For the first testcase, maximum subarray sum is generated by the entire array - 1+2+3+4 = 10
// For the second testcase , maximum subarray sum is generated by the subarray {5,10} - 5+10 = 15



// 
//             \
// ------------->    FAANG
//             /
// 


#include <bits/stdc++.h>
using namespace std;


int maximumSum(vector<int> vi){
    int sum = vi[0];

    int maximum = vi[0];

    int size = vi.size();
    int j = 0;
    for(int i=1; i<size; i++){
        if(sum > sum+vi[i]){
            sum -= vi[j];
            j++;
        }
        sum += vi[i];

        maximum = max(maximum, sum);
    }



    return maximum;
}

int main(){
    int t; cin >> t;
    vector<int> vi;
    while(t--){
        int n; cin >> n;

        while(n--){
            int t;
            cin >> t;
            vi.push_back(t);
        }

        cout << maximumSum(vi) << endl;
    }
}