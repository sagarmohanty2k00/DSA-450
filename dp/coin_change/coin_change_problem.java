import java.lang.*;
import java.util.*;

class Test{
	static void calculate(int cash, int[] coins, int size){
		long sol[] = new long[cash+1];
		Arrays.fill(sol, 0);
		sol[0] = 1;
		for(int i=0; i<size; i++){
			for(int j=coins[i]; j<=cash; j++){
				sol[j] += sol[j-coins[i]];
			}
		}
		System.out.println(sol[cash]);
	}

	public static void main(String ss[]){
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the size: ");
		int size = input.nextInt();
		int coins[] = new int[size];

		System.out.println("Enter the elements:");
		for(int i=0; i<size; i++) {
			coins[i] = input.nextInt();
		}
		System.out.print("Enter the amount you want the change of: ");
		int cash = input.nextInt();

		calculate(cash, coins, size);


	}
}
