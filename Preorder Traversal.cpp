/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void solve(TreeNode* A, vector<int> &ans){
    if(A==NULL) return;
    ans.push_back(A->val); //current
    solve(A->left, ans);       //left
    solve(A->right, ans);      //right
}
vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int> ans;
    solve(A,ans);
    return ans;
}
