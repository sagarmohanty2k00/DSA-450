import java.lang.*;
import java.util.*;

class Test{
	static int max(int a, int j) {
		if(a<b)
			return b;
		else
			return a;
	}
	static int lcs(String X, String Y) {
		int L[][] = int [X.length+1][Y.length+1];
		for(int i=0; i<=X.length; i++) {
			for(int j=0; j<Y.length; j++) {
				if(i==0 || j==0)
					L[i][j] = 0;
				else if(X[i-1] == Y[j-1]) {
					L[i][j] = 1 + L[i-1][j-1];
				}
				else
					L[i][j] = max(L[i-1][j], L[i][j-1]);
			}
		}
	}
	public static void main(String s[]){
		String X = "SAGARMOHANTY";
		String Y = "SAGANTY";

		int n = lcs(X, Y);
		System.out.println("The Length of LCS is: " + n);


	}
}
