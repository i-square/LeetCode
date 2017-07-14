// You are given a binary tree in which each node contains an integer value.
//
// Find the number of paths that sum to a given value.
//
// The path does not need to start or end at the root or a leaf, but it must go downwards
// (traveling only from parent nodes to child nodes).
//
// The tree has no more than 1,000 nodes and the values are in the range -1,000,000 to 1,000,000.
//
// Example:
//
// root = [10,5,-3,3,2,null,11,3,-2,null,1], sum = 8
//
//       10
//      /  \
//     5   -3
//    / \    \
//   3   2   11
//  / \   \
// 3  -2   1
//
// Return 3. The paths that sum to 8 are:
//
// 1.  5 -> 3
// 2.  5 -> 2 -> 1
// 3. -3 -> 11


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    void helper(TreeNode *node, const int &sum, int curSum, unordered_map<int, int> &stores, int &ans) {
        if (!node) return;
        curSum += node->val;
        ans += (curSum == sum) + (stores.count(curSum - sum) ? stores[curSum - sum] : 0);
        ++stores[curSum];
        helper(node->left, sum, curSum, stores, ans);
        helper(node->right, sum, curSum, stores, ans);
        --stores[curSum];
    }
public:
    int pathSum(TreeNode* root, int sum) {
        unordered_map<int, int> stores;
        int ans = 0;
        helper(root, sum, 0, stores, ans);
        return ans;
    }
};
