// Ramu has an array of strings. He want to find a string s such that it is a concatenation of sub-sequence of given array and have unique characters.Since,he has just started coding so he needs your help.
// A sub-sequence of an array is a set of elements that can be obtained by deleting some elements(posssibly none) from the array and keeping the order same.
// Print the maximum possible length of s.

// Input Format
// The first line of input contains an interger n -the length of array.Next n lines contains the element(strings) of the array

// Constraints
// 1 <= n <= 18, 1 <= arr[i].length<= 26

// Output Format
// Print one integer - the maximum length of s.

// Sample Input
// 3
// ab
// cd
// ab
// Sample Output
// 4


// 
//             \
// ------------->    F A A N G
//             /
// 



#include <bits/stdc++.h>
using namespace std;


// How to check frequence of any character in a string
// Code Begins
int rec(string s, vector<string> vs, int i){
    if(i == vs.size()){
        int freq[26] = {0};

        for(int k=0; k<s.length(); k++){
            if(freq[s[k] - 'a'] == 1) return 0;

            freq[s[i] - 'a']++;
        }
        cout << s << " returned " << s.length() << endl ;
        return s.length();
    }

    int op1, op2;
    op1 = op2 = INT_MIN;

    if(s.length() + vs[i].length() <= 26){
        // We can include the string
        op1 = rec(s+vs[i], vs, i+1);
    }
    // We need to exclude it once
    op2 = rec(s, vs, i+1);

    return max(op1, op2);
}
// Code Ends

int solve(vector<string> vs){
    string s = "";
    return rec(s, vs, 0);
}

int main(){
    vector<string> vs;

    int n; cin >> n;
    string s;
    for(int i=0;i<n;i++){
        cin >> s;
        vs.push_back(s);
    }

    cout << solve(vs);
}