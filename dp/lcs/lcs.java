import java.lang.*;
import java.util.*;

class Lcs
{
	int max(int a, int b){
		if(a >= b){
			return a;
		}
		else{
			return b;
		}
	}
	public int lcs(char[] X, char[] Y, int n, int m)
	{
		int arr[][] = new int[n+1][m+1];

		for(int i = 0; i<=n; i++){
			for(int j=0; j<=m; j++){
				if(i==0 || j==0){
					arr[i][j] = 0;
				}
				else if(X[i-1] == Y[j-1]){
					//System.out.println("Got a similar Character...");
					arr[i][j] = 1 + arr[i-1][j-1];
					//System.out.println(arr[i][j]);
				}
				else {
					arr[i][j] = max(arr[i][j-1], arr[i-1][j]);
				}
			}
		}
		//for(int i=0; i<n; i++)
		return arr[n][m];

	}
}
class Test
{
	public static void main(String args[]){
	
		Scanner sc = new Scanner(System.in);
		Lcs l = new Lcs();
		String s1, s2;

		s1 = sc.nextLine();
		s2 = sc.nextLine();

		char[] x = s1.toCharArray();
		char[] y = s2.toCharArray();
		
		int n = x.length;
		int m = y.length;

		int ans = l.lcs(x, y, n, m);

		System.out.println("Length of LCS is "+ans);
	}
}
