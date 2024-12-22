package Recursion;

import java.util.*;

public class StrPermutation {
    public void getPermutations(String str, int idx, List<String> result) {
        if (idx == str.length()) {
            result.add(str); // Add the current permutation to the result list
            return;
        }

        char[] chars = str.toCharArray(); // Convert string to char array for swapping
        for (int i = idx; i < chars.length; i++) {
            swap(chars, idx, i); // Swap characters
            getPermutations(new String(chars), idx + 1, result); // Recurse
            swap(chars, idx, i); // Backtrack to restore the original order
        }
    }

    public void swap(char[] chars, int i, int j) {
        char temp = chars[i];
        chars[i] = chars[j];
        chars[j] = temp;
    }

    public List<String> permute(String str) {
        List<String> result = new ArrayList<>();
        getPermutations(str, 0, result);
        return result;
    }

    public static void main(String[] args) {
        StrPermutation solution = new StrPermutation();
        String input = "abc";

        // Generate and print all permutations
        List<String> permutations = solution.permute(input);
        System.out.println("Permutations of \"" + input + "\":");
        for (String perm : permutations) {
            System.out.println(perm);
        }
    }
}
