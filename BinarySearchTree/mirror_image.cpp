void mirrorImage(node *t)
{
    node *temp;
    if(t!=NULL)
    {
        temp=t->left;
        t->left=t->right;
        t->right=temp;

        mirrorImage(t->left);
        mirrorImage(t->right);
    }
}
