Morris traversal
public:
vector<int> inorderMorris(Tree*Node root)
{
vector<int> inorder;
  TreeNode*curr=root;
  while(curr!=NULL)
  {
  if(curr->left==NULL)
    inorder.push_back(curr->val);
    curr=curr->right;
    
  }
  else
  {
  TreeNode*prev=curr->left;
    while(prev->right&&prev->right!=curr)
      prev=prev->right;
    
    if(prev->right==NULL)
    {
    prev->right=NULL:
      inorder.push_back(curr->val);
      curr=curr->right;
    }
  }
}
return inorder;
}
};
