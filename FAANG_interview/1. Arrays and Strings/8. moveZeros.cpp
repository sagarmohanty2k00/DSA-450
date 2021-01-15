// Given an array A, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Input Format
// First line contains integer n as size of array. next n lines contains a single integer as element of array.

// Constraints
// Note: Do this in-place without making a copy of the array and Minimize the total number of operations.

// Output Format
// Print the output Array.

// Sample Input
// 5
// 0 
// 1 
// 0 
// 3
// 12
// Sample Output
// 1 3 12 0 0



// 
//             \
// ------------->    FAANG
//             /
// 


#include <bits/stdc++.h>
using namespace std;

void moveZeros(vector<int> vi){
    int j = 0;
    for(int i=0; i<vi.size(); i++){
        if(vi[i] != 0){
            if(vi[j] == 0){
                int t = vi[i];
                vi[i] = vi[j];
                vi[j] = t;
            }
            if(vi[j] != 0){
                j++;
            }
        }
    }

    for(auto x : vi){
        cout << x << " ";
    }

    cout << endl;
}

int main(){
    int n; cin >> n;
    vector<int> vi;

    while(n--){
        int t; cin >> t;
        vi.push_back(t);
    }

    moveZeros(vi);
}