// Ram is very good at mathematics. He was given a number n and was told to find out number of trailing zeroes in n! in logarithmic time. Can you help him?

// Input Format
// An integer n

// Constraints
// n can go upto 2000

// Output Format
// An integer denoting number of trailing zeroes

// Sample Input
// 5
// Sample Output
// 1
// Explanation
// 5! is 120, so there is one trailing zero.



// 
//             \
// ------------->    Amazon
//             /
// 


#include <bits/stdc++.h>
using namespace std;

int countZeros(int n){
    if(n == 0){
        return 0;
    }
    
    int numberOfZeros = 0;
    
    while(n > 0){
        n /= 5;
        numberOfZeros += n;
    }
    return numberOfZeros;
}

int main(){
    int n; cin >> n;

    cout << countZeros(n) << endl;
}

// Key to remember here is 100 adds 2 0s and 
// every time when a 2 multiplies with a 50 it also gives a 100

