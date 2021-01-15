// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n = image.size();
        int m = image[0].size();
        
        if(n == 0 and m == 0){
            return image;
        }

        int oldColor = image[sr][sc];
        image[sr][sc] = newColor;
        
        if(sr > 0){
            if(image[sr-1][sc] == oldColor){
                image = floodFill(image, sr-1, sc, newColor);
            }
        }
        
        if(sc > 0){
            if(image[sr][sc-1] == oldColor){
                image = floodFill(image, sr, sc-1, newColor);
            }
        }
        
        if(sr < n-1){
            if(image[sr+1][sc] == oldColor){
                image = floodFill(image, sr+1, sc, newColor);
            }
        }
        if(sc < n-1){
            if(image[sr][sc+1] == oldColor){
                image = floodFill(image, sr, sc+1, newColor);
            }
        }
        
        
        
        return image;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends