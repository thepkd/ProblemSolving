vector<int> inorderTraversal(TreeNode* root){
    std::stack<TreeNode*> stacc;
    vector<int> order;
    stacc.push(root);
    if(root!= nullptr)
    recurse(stacc, order);
    return order;
}

void recurse(stack<TreeNode*>& stacc, vector<int>& order){
        if(!stacc.empty()){
            TreeNode* stacbac = stacc.top();
            if(stacbac->left != nullptr){
                stacc.push(stacbac->left);
                recurse(stacc, order);
            }
            order.push_back(stacbac->val);
            stacc.pop();
            }
            if(stacbac->right != nullptr){
                stacc.push(stacbac->right);
                recurse(stacc,order); 
            }
}