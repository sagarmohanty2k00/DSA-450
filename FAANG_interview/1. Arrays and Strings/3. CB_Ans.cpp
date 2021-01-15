// Question : container-with-most-water

// Time Complexity : Overall time complexity is O(n).

// Algorithm: Here using two pointer approach we will solve the problem given problem and the steps to solve the problem are given below:

// Step 1: Initialize one variable n(int n) ,vector ‘v’ of integer type(vector v).(n is the number of elements to be pushed in the vector ‘v’ ).

// Step 2: Make a function maxArea(v) and pass ‘v’ (call by reference) as parameter and the function will return an integer type answer.
// maxArea(v)
// Int maxArea(vector& height)

// Step 3: Inside the function declare variables n=height.size()-1 ,i=0,ans=0 initially.

// Step 4: Loop from i=0 till i is less than n and inside the loop update the ans variable equal to maximum of variable ans and area of the rectangle (length=(n-i) and breadth=min(height[i],height[n]) covered between variables i and n ((n-i)*min(height[i],height[n]).

// Step 5: Check if height[i] is less than height[n] then increment i by 1 else decrement n by 1.

// Step 6: If i becomes greater or equal to n return ans which is the required answer.

// Solution Link: https://ide.codingblocks.com/s/214250

