#include <cstdio>
#include <vector>

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
}

class Solution {
    public:
        TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
            return FindRoot(pre, 0, pre.size() - 1, vin, 0, vin.size() - 1);

        }

    private:
        TreeNode* FindRoot(const vector<int> &pre, int p_begin, int p_end, const vector<int> &vin, int v_begin, int v_end) {
            if(p_begin > p_end || v_begin > v_end)
                return NULL;

            TreeNode *root = new TreeNode(pre[p_begin]);

            int i = v_begin;
            for(; i <= v_end; ++i) {
                if(vin[i] == pre[p_begin])
                    break;
            }

            int left_num = i - v_begin;
            int right_num = v_end - i;

            root->left = left_num == 0 ? NULL : FindRoot(pre, p_begin + 1, p_begin + left_num, vin, v_begin, i - 1);
            root->right = right_num == 0 ? NULL : FindRoot(pre, p_begin + left_num + 1, p_end, vin, i + 1, v_end);

            return root;
        }
     
};
