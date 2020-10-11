import java.util.*;
import java.lang.*;

class Test{
	static void array_show(int[] arr, int size) {
		for(int i=0; i<size; i++) {
			System.out.print(arr[i] + "\t");
		}
		System.out.println(" ");
	}

	static void bubble_sort(int[] arr, int size) {
		for(int i=0; i<size-1; i++) {
			for(int j=0; j<size-i-1; j++) {
				if(arr[j]>arr[j+1]) {
					arr[j] = arr[j] + arr[j+1];
					arr[j+1] = arr[j] - arr[j+1];
					arr[j] = arr[j] - arr[j+1];
				}
			}
		}

		System.out.println("\n***  Array after Sorting  ***\n");
		array_show(arr, size);
	}

	public static void main(String ss[]) {
		Scanner input = new Scanner(System.in);

		System.out.print("Enter the size of array: ");
		int size = input.nextInt();
		int arr[] = new int[size];

		System.out.println("Enter the values of array: ");
		for(int i=0; i<size; i++) {
			arr[i] = input.nextInt();
		}
		System.out.println("\n***  Array before Sorting  ***\n");
		array_show(arr, size);
		bubble_sort(arr, size);
	}
}
