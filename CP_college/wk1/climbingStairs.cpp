// https://leetcode.com/problems/climbing-stairs/submissions/


class Solution {
public:
    int solve(int n, int i, int dp[]){
        if(i == n){
            return 1;
        }
        
        
        if(dp[n-i] != -1){
            return dp[n-i];
        }
        int ans = 0;
        if(i+1 <= n){
            ans += solve(n, i+1, dp);
        }
        if(i+2 <= n){
           ans += solve(n, i+2, dp);
        }
        
        return dp[n-i] = ans;
    }
    int climbStairs(int n) {
        int dp[n+1];
        for(int i=0; i<n+1; i++){
            dp[i] = -1;
        }
        return solve(n, 0, dp);
    }
};


