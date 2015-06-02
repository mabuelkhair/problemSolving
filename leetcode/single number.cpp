class Solution {
public:
    int singleNumber(int A[], int n) {
        // XOR will solve the problem because the same number will remove each other and the remain number is the unique one
        for(int i=0;i<n-1;i++)
            A[i+1]=A[i]^A[i+1];
        return A[n-1];
    }
};