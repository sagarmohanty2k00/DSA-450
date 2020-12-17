// You are given an array of positive and negative integers. If a number k at an index is positive, then move forward k steps. Conversely, if it's negative (-k), move backward k steps. Since the array is circular, you may assume that the last element's next element is the first element, and the first element's previous element is the last element.

// Determine if there is a loop (or a cycle) in array. A cycle must start and end at the same index and the cycle's length > 1. Furthermore, movements in a cycle must all follow a single direction. In other words, a cycle must not consist of both forward and backward movements. Print 1 if cycle present else print 0.

// Input Format
// First Line Contains single integer n Second line contains n space separated integers

// Constraints
// 1<=n<=1e6
// -1000<=Ai<=1000

// Output Format
// single digit 1 or 0

// Sample Input
// 5
// 2 -1 1 2 2
// Sample Output
// 1



// 
//             \
// ------------->    F A A N G
//             /
// 





#include <bits/stdc++.h>
using namespace std;

int next(int i, vector<int> vi){
    return (i + vi[i] + vi.size()) % vi.size();
}

int solve(vector<int> vi){
    for(int i=0; i<vi.size(); i++){
        if(vi[i] == 0){
            return 0;
        }

        int v = vi[i];
        int slow = i, fast = i;
        while(
            vi[slow] * vi[slow + next(slow, vi)] > 0 &&
            vi[fast] * vi[fast + next(fast, vi)] > 0 &&
            vi[fast] * vi[fast + next(next(fast, vi), vi)]
        ){
            if(slow == fast){
                if (slow == next(slow, vi)){
                    break;
                }
                return 1;
            }
        }

    }

    return 0;
}

int main(){
    int n; cin >> n;

    vector<int> vi;
    int v;

    for (int i=0; i<n; i++){
        cin >> v;
        vi.push_back(v);
    }

    cout << solve(vi);
}