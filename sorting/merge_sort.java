import java.util.*;
import java.lang.*;

class Test{
	static void array_show(int[] arr, int size) {
		for(int i=0; i<size; i++) {
			System.out.print(arr[i] + "\t");
		}
		System.out.println(" ");
	}

	void merge(int[] arr, int l, int m, int r) {
		int L[] = new int[m-l+1];
		int R[] = new int[r-m];

		for(int i=0; i<m+1-l; i++) {
			L[i] = arr[l+i];
		}
		for(int i=0; i<r-m; i++) {
			R[i] = arr[l+m+i];
		}

		int i=0, j=0, k=0;

		while(i<m-l+1 && j<r-m) {
			if(L[i]<R[j]){
				arr[k] = L[i];
				i++;
				k++;
			}
			else{
				arr[k] = R[j];
				j++;
				k++;
			}
		}
		while(i<m-l+1){
			arr[k] = L[i];
			i++;
			k++;
		}
		while(j<r-m) {
			arr[k] = R[j];
			k++;
			j++;
		}
	}

	void merge_sort(int[] arr, int l, int r) {
		int m;
		if(l < r) {
			m = (l + r)/2;	
			merge_sort(arr, l , m);
			merge_sort(arr, m+1, r);

			merge(arr, l, m, r);
		}
	}

	public static void main(String ss[]) {
		Scanner input = new Scanner(System.in);
		Test ob = new Test();

		System.out.print("Enter the size of array: ");
		int size = input.nextInt();
		int arr[] = new int[size];

		System.out.println("Enter the values of array: ");
		for(int i=0; i<size; i++) {
			arr[i] = input.nextInt();
		}
		System.out.println("\n***  Array before Sorting  ***\n");
		array_show(arr, size);
		ob.merge_sort(arr, 0, arr.length-2);

		System.out.println("\n***  Array after Sorting  ***\n");
		array_show(arr, size);
	}
}
