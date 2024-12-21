package Recursion;

import java.util.Scanner;

public class SumN {
    int Sum(int n) {
        if (n == 1)
            return 1;
        return n + Sum(n - 1);
    }

    @SuppressWarnings("resource")
    public static void main(String[] args) {
        SumN Su = new SumN();
        Scanner sc = new Scanner(System.in);

        System.out.println("enter a value");
        int n = sc.nextInt();

        System.out.println(Su.Sum(n));
    }

    // TC = Total Calls * work done in each call => n*1 => O(n)
    // SC = O(n)
}
