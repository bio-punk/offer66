/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
    	if (pre.size() < 1 || vin.size() < 1) { return NULL; }

    	TreeNode* root = new TreeNode(pre[0]);

    	vector<int> Lp, Lv, Rp, Rv;

    	bool atleft = true;
    	for (int i = 0; i < vin.size(); i++) {
    		if (vin[i] == pre[0]) { atleft = false; continue; }
    		if (atleft) { Lv.push_back(vin[i]); continue; }
    		Rv.push_back(vin[i]);
    	}

    	for (int i = 1; i < Lv.size() + 1; i++) { Lp.push_back(pre[i]); }
    	for (int i = Lv.size() + 1; i < pre.size(); i++) { Rp.push_back(pre[i]); }

    	root->left = reConstructBinaryTree(Lp, Lv);
    	root->right = reConstructBinaryTree(Rp, Rv);

    	return root;
    }
};