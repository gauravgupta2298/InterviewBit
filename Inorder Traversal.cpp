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
    ans.push_back(A->val);     //current
    solve(A->right, ans);      //right
}
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> ans;
    solve(A,ans);
    return ans;
}
