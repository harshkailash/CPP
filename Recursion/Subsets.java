package Recursion;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Subsets {
    void printSubsets(int[] arr, List<Integer> ans, int i) {

        if (i == arr.length) {
            for (int val : ans)
                System.out.print(val + " ");
            System.out.println();
            return;
        }

        // inclusion
        ans.add(arr[i]);
        printSubsets(arr, ans, i + 1);

        // backtrack
        ans.remove(ans.size() - 1);

        // exclude
        printSubsets(arr, ans, i + 1);
    }

    public static void main(String[] args) {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        Subsets su = new Subsets();
        System.out.println("Enter the number of element in array you want to find the subsets for");
        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();
        List<Integer> ans = new ArrayList<>();

        su.printSubsets(arr, ans, 0);
    }
}

// TC = total calls * work done in each call => O[(2^n)*n]
