// Link: https://leetcode.com/problems/all-elements-in-two-binary-search-trees/
class Solution {
public:
   vector<int>v;
        void trav( TreeNode *root){
    if( root==NULL)
    return ;
    trav(root->left);
    v.push_back(root->val);
    trav(root->right);

}
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        trav(root1);
        trav(root2);
        sort(v.begin(),v.end());
        return v;
    }
};