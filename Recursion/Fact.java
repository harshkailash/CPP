package Recursion;

import java.util.*;

public class Fact {

    int factorial(int n) {

        if (n == 0) {
            return 1;
        }

        return n * factorial(n - 1);
    }

    @SuppressWarnings("resource")
    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        System.out.println("Enter a number");
        int n = obj.nextInt();
        Fact fct = new Fact();
        System.out.println(fct.factorial(n)); // 2nd method
                                              // F(n) = k+f(n-1) ==> f(n-1) = k+f(n-2) => .... => f(1) = k+k2
                                              // F(n) = k*n + k2
                                              // F(n) = O(n)
    }
    // Time complexity
    // 1) recurrence Relation
    // 2) Total no. of rec call * work in each call
    // Space Complexity = height of call stack * memory in each call => O(n)
}
