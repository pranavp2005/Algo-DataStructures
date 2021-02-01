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
    
    
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
     
        if(t1 && t2){
            TreeNode* newNode =new TreeNode(t1->val+ t2->val);
            newNode->left = mergeTrees(t1->left,t2->left);
            newNode->right = mergeTrees(t1->right,t2->right);
            return newNode;
            
        }
        else if(!t1 && t2){
            TreeNode* newNode = new TreeNode(t2->val);
            
            newNode->left = mergeTrees(NULL,t2->left);
            newNode->right = mergeTrees(NULL,t2->right);
            return  newNode;
        }
        
        else if(!t2 && t1){
            TreeNode* newNode =new TreeNode(t1->val);
            
            newNode->left = mergeTrees(t1->left,NULL);
            newNode->right = mergeTrees(t1->right,NULL);
            return  newNode;
        }
        
        else{
            
            return NULL;
        }
    
        
    }
};