struct node
{
  int value;
  struct node* left;
  struct node* right;
};


int sumTheTreeValues(struct node* root) {
  return root == 0 ? 0 : root->value + sumTheTreeValues(root->left) + sumTheTreeValues(root->right);
}
