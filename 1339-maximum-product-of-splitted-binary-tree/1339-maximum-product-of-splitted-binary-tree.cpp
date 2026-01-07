class Solution {
public:
    long long maxProd = 0, totalSum = 0, MOD = 1e9 + 7;

    int getSum(TreeNode* root) {
        if (!root) return 0;
        return root->val + getSum(root->left) + getSum(root->right);
    }

    int helper(TreeNode* root) {
        if (!root) return 0;
        int curr = root->val + helper(root->left) + helper(root->right);
        long long product = (long long)curr * (totalSum - curr);
        maxProd = max(maxProd, product);
        return curr;
    }

    int maxProduct(TreeNode* root) {
        totalSum = getSum(root); // Pehle poore tree ka sum nikal le!
        helper(root); // Fir har subtree pe product check kar!
        return maxProd % MOD;
    }
};