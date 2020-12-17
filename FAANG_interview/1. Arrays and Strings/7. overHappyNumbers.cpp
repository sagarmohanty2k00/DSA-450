// A 'overhappy' number follows the following criteria:

// It is always a positive integer. The integer number is replaced by the sum of the squares of its digits and this process is repeated until the sum equals 1.
// The numbers which loop endlessly and never reach to the sum of 1 are not overhappy numbers.

// Input Format
// First line contains an positive integer n.

// Constraints
// None

// Output Format
// Print true if n is overhappy number else print false.

// Sample Input
// 19
// Sample Output
// true
// Explanation
// None


// 
//             \
// ------------->    FAANG
//             /
// 


#include <bits/stdc++.h>
using namespace std;

void happynumber(int n){
    long long int number = n;
    set<long long int> setnumber;
    setnumber.insert(n);

    while(number != 1){
        long long int sum = 0;
        while(number != 0){
            sum += (number % 10)*(number % 10);
            number /= 10;
        }

        number = sum;
        if(setnumber.count(number)){
            cout << "false\n";
            return;
        }
        else{
            setnumber.insert(number);
        }
    }

    cout << "true\n";
}


int main(){
    int n; cin >> n;

    happynumber(n);
}