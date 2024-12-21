package Recursion;

import java.util.Scanner;

public class Fibonacci {
    int fib(int n) {

        if (n == 0 || n == 1)
            return n;
        return fib(n - 1) + fib(n - 2);
    }

    @SuppressWarnings("resource")
    public static void main(String[] args) {
        Fibonacci fb = new Fibonacci();
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number");
        int n = sc.nextInt();

        System.out.println(fb.fib(n));
    }
}

// problem no. 509 on leetcode

// TC = total calls * work done in each call = 2n - 1 = O(2^n)
// SC = height of call stack * memory in each call = O(n)