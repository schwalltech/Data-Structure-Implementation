int countLeaf(node *t)
{
    static int c=0;
    if(t!=NULL)
    {
        if(t->left==NULL || t->right==NULL)
        {
            c++;
        }
        countLeaf(t->left);
        countLeaf(t->right);
    }
    return c;
}
