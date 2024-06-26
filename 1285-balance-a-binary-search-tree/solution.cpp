/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* balanceBST(TreeNode* root) {
        std::vector<int> nums;
        inordertraversal(root, nums);
        return buildbalancedBST(nums, 0, nums.size() - 1);
    }
    void inordertraversal(TreeNode* root,vector<int>& nums){
    if(root==nullptr){
        return;
    }
        inordertraversal(root->left, nums);
        nums.push_back(root->val);
        inordertraversal(root->right, nums);
    }
    TreeNode* buildbalancedBST(vector<int>& nums, int start, int end){
        if (start>end){
            return nullptr;
        }
        int mid=start+(end-start)/2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = buildbalancedBST(nums, start, mid - 1);
        node->right = buildbalancedBST(nums, mid + 1, end);
        return node;
    }
};
