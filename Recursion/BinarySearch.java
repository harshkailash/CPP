package Recursion;

import java.util.Scanner;

public class BinarySearch {
    int BS(int[] arr, int target, int st, int end) {
        int mid = st + (end - st) / 2;
        while (st <= end) {
            if (arr[mid] == target) {
                return mid;

            } else if (arr[mid] < target) {
                return BS(arr, target, mid + 1, end);
            } else {
                return BS(arr, target, st, mid - 1);
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        BinarySearch bs = new BinarySearch();
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number of elements in the array");
        int n = sc.nextInt();
        System.out.println("Enter sorted array");
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println("enter the target to be found");
        int target = sc.nextInt();
        int start = 0;
        int end = n - 1;
        System.out.println("Element found at index: " + bs.BS(arr, target, start, end));
    }
}

// also question no. 704 on leetcode

// TC = Total no. of call * work done in each call => O(log n)
// SC = O(log n)