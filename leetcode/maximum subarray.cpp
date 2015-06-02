#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(int A[], int n) {
        int sum=0;
        int res=-1e9;;
        for(int i=0;i<n;i++)
        {
            sum=max(sum+A[i],A[i]);
            res=max(res,sum);
        }
        return res;
    }
};
