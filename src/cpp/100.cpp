class Solution {
   public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) {
            return true;
        } else if (p == nullptr && q != nullptr) {
            return false;
        } else if (p != nullptr && q == nullptr) {
            return false;
        }
        if (p->val != q->val) {
            return false;
        }
        bool res = isSameTree(p->left, q->left);
        if (res == false) {
            // 左子树不相等
            return false;
        }
        res = isSameTree(p->right, q->right);
        return res;
        // return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};