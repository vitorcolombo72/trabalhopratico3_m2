/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int depth(struct TreeNode* root,int x){
    if(!root){
        return -1;
    }
    int dist = -1;
    if(root->val == x) 
    return dist + 1;
    dist = depth(root->left, x);
    if(dist >= 0)
    return dist + 1;
    dist = depth(root->right, x);
    if(dist >= 0)
    return dist + 1;

    return -1;
}
bool parent(struct TreeNode* root,int x,int y){
    if(!root)
    return NULL;

    if(root->left && root->left->val == x && root->right && root->right->val == y
        || root->left && root->left->val == y && root->right && root->right->val == x)
        return true;
    return (parent(root->left,x,y) || parent(root->right,x,y));;
}
bool isCousins(struct TreeNode* root, int x, int y){
    int a1,a2;
    bool teste;
    if(!root){
        return false;
    }
    else{
        a1 = depth(root,x);
        a2 = depth(root,y);
        teste = parent(root,x,y);
        if(a2 == a1 && teste == false){
            return true;
        }
        else{
            return false;
        }

    }
           
}