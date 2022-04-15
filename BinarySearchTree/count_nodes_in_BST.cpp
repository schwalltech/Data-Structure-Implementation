

int count(node *t)
{
    static int c=0;
    if(t!=NULL)
    {
        c++;
        count(t->left);
        count(t->right);
    }
    return c;
}
