**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int returnDepth(struct TreeNode* root,int x , int y){
    int i,j;
    if(!root){
        return 0;
    }
    else{
        i = returnDepth(root->right,x,y);
        j = returnDepth(root->left,x,y);
        if(root->right->val == x){
            return i + 1;
        }
        else{
            return j + 1;
        }
        if(root->left->val == y){
            return j + 1;
        }
        else{
            return i + 1;
        }
    }
}

bool isCousins(struct TreeNode* root, int x, int y){
    int a1,a2;
    if(!root){
        return false;
    }
    else{
        a1 = returnDepth(root,x,y);
        a2 = returnDepth(root,x,y);
        if(a2 == a1){
            return true;
        }
        else{
            return false;
        }

    }
           
}

