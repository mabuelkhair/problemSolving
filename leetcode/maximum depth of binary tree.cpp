#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

class Solution {
public:
    int getMax(TreeNode *node, int sum){
        if(node==NULL)
            return sum;
        int sum1=getMax(node->left,sum+1);
        int sum2=getMax(node->right,sum+1);
        return max(sum1,sum2);
    }
    int maxDepth(TreeNode *root) {
        return getMax(root,0);
    }
    // other solution
    /*
    int maxDepth(TreeNode *root)
    {
    	if(root==NULL)
    	return 0;
    	return 1+max(maxDepth(root->left),maxDepth(root->right));
    }
    
    */
};
