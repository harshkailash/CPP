/*
 * @lc app=leetcode id=31 lang=cpp
 *
 * [31] Next Permutation
 */

// @lc code=start
class Solution {
public:
    void nextPermutation(vector<int>& A) {
        int n=A.size();
        int piv=-1;

        for(int i=n-2;i>=0;i--) // Worst Casr TC = O(n);
        {
            if(A[i]<A[i+1])
            {
                piv=i;
                break;
            }
        }
        if(piv==-1)
        {
            int k=0;
            int l=n-1;
            while(k<=l)
            {
                swap(A[k],A[l]);
                k++;
                l--;
            }
            return;
        }

        for(int i=n-1;i>piv;i--)
        {
            if(A[i]>A[piv])
            {
                swap(A[i],A[piv]);
                break;
            }
        }

        int i=piv+1;
        int j=n-1;

        while(i<=j)
        {
            swap(A[i],A[j]);
            i++;
            j--;
        }
    }
};
// @lc code=end

