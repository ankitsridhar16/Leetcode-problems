/**
 * In a binary tree, the root node is at depth 0, and children of each depth k node are at depth k+1.

Two nodes of a binary tree are cousins if they have the same depth, but have different parents.

We are given the root of a binary tree with unique values, and the values x and y of two different nodes in the tree.

Return true if and only if the nodes corresponding to the values x and y are cousins.

 **/

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
    int xdepth, ydepth, xparent, yparent;
    void solve(TreeNode* root, int x, int y, int depth, TreeNode* node_parent){
    if(root==NULL) return;
    if(root->val==x){
        xdepth=depth;
        xparent=node_parent->val;
        return;
    }
    if(root->val==y){
        ydepth=depth;
        yparent=node_parent->val;
        return;
    }
    solve(root->left, x, y, depth+1, root);
    solve(root->right, x, y, depth+1, root);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        if(root->val==x || root->val==y)
            return false;
        solve(root,x,y,0,NULL);
        if(xdepth==ydepth && xparent!=yparent)
            return true;
        return false;
        
    }
};