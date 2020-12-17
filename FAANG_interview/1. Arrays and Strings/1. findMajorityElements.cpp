// You have to given an array A of size N.
// Find all the elements which appear more than floor(N/3) times in the given array.
// Wait Wait!
// There is a condition that you have to do your job in O(N) time complexity and O(1) space complexity.

// Input Format
// First line contains N ->No. of elements in the array
// Second line has N integers denoting the elements of the array A ie A1,A2,A3…….AN.

// Constraints
// 1<=N<=10^7
// 0<=Ai<=10^9

// Output Format
// Print a single line containing all the majority elements occurring more than floor(N/3) times.
// If there is no majority element then just print "No Majority Elements".

// Sample Input
// 8
// 2 2 3 1 3 2 1 1 
// Sample Output
// 1 2
// Explanation
// None


// 
//             \
// ------------->    F A A N G
//             /
// 


#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>& nums){
    // can be done with sorting but the solution will be of nlog(n) in its normal version
    /* 
    sort(nums.begin(), nums.end());
    ling long int tmp = nums[0];
    for(auto x: nums){
        if(tmp == x){
            n++;
        }else{
            if(n > nums.size()/3){
                m++;
            }
            n = 1;
            tmp = x;
        }
    } 
    */ 

    // But we will follow Boyer Moore majority vote Algorithm.

    
    vector<int> vi;
    int e1 = 0, ec1 = 0;
    int e2 = 0, ec2 = 0;

    for(auto x : nums){
        if(x == e1){
            ec1 ++;
        }
        else if(x == e2){
            ec2 ++;
        }
        else if(ec1 == 0){
            ec1 = 1;
            e1 = x;
        }
        else if(ec2 == 0){
            ec2 = 1;
            e2 = x;
        }

        else{
            ec1 --;
            ec2 --;
        }
    }

    ec1 = ec2 = 0;
    for(auto x : nums){
        if(x == e1){
            ec1++;
        }
        if(x == ec2){
            ec2++;
        }
    }

    if(ec1 > nums.size()/3){
        vi.push_back(e1);
    }
    if(ec2 > nums.size()/3){
        vi.push_back(e2);
    }

    return vi;
}

int main(){
    int n, v;
    cin >> n;

    vector<int> nums;

    for(int i=0; i<n; i++){
        cin >> v;
        nums.push_back(v);
    }

    vector<int> ans;
    ans = solve(nums);
    if(ans.size() == 0){
        cout <<  "No Majority Elements";
    }

    else{
        for(auto x: ans){
            cout << x << " ";
        }
    }

    // cout << endl;

}