package Recursion;

import java.util.*;

public class Understand {
    void printNum(int n) {

        if (n == 1) {
            System.out.println(1);
            return;
        }
        System.out.println(n);
        printNum(n - 1);

        // backtracking
        System.out.println(7);
    }

    public static int main(String[] args) {
        @SuppressWarnings("resource")
        Scanner obj = new Scanner(System.in);

        System.out.println("please enter the number");

        int n = obj.nextInt();

        Understand un = new Understand();

        un.printNum(n); // f(n) = print n + f(n-1) => O(1) + TC(n-1)

        return 0;
    }
}
