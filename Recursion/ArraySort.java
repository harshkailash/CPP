package Recursion;

import java.util.Scanner;

public class ArraySort {
    Boolean isSorted(int[] arr, int n) {
        if (n == 1 || n == 0)
            return true;
        return arr[n - 1] >= arr[n - 2] && isSorted(arr, n - 1);
    }

    @SuppressWarnings("resource")
    public static void main(String[] args) {
        ArraySort as = new ArraySort();
        Scanner sc = new Scanner(System.in);

        System.out.println("enter the number of elements in array");
        int n = sc.nextInt();

        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println(as.isSorted(arr, n));
    }
}
