int countParent(node *t)
{
    static int c=0;
    if(t!=NULL)
    {
        if(t->left!=NULL || t->right!=NULL)
        {
            c++;
        }
        countParent(t->left);
        countParent(t->right);
    }
    return c;
}
