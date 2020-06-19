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
    solve(A->left, ans);       //left
    solve(A->right, ans);      //right
    ans.push_back(A->val);     //current
}
vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int> ans;
    solve(A,ans);
    return ans;
}
