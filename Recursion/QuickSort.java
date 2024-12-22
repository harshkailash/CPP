package Recursion;

import java.util.Scanner;

public class QuickSort {

    public int partition(int arr[], int low, int high) {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                // swap
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        i++;
        int temp = arr[i];
        arr[i] = pivot;
        arr[high] = temp;
        return i; // pivot idx = pidx
    }

    public void qSort(int[] arr, int low, int high) {
        if (low < high) {
            int pidx = partition(arr, low, high);

            qSort(arr, low, pidx - 1);
            qSort(arr, pidx + 1, high);
        }
    }

    public static void main(String[] args) {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);

        QuickSort qs = new QuickSort();
        System.out.println("enter the no. of elements in array");
        int n = sc.nextInt();
        int arr[] = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int len = arr.length;

        qs.qSort(arr, 0, len - 1);

        // print
        for (int i = 0; i < len; i++) {
            System.out.println(arr[i]);
        }
    }
}

// TC---------
/*
 * worst : O(n^2) ----> worst case happens when the pivot is always the smallest
 * or the largest element
 * it will happen when it is sorted or the largest element is at the end
 * average : O(nlogn)
 * 
 */
