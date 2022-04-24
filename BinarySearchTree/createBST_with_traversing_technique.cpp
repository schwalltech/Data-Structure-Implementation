// Binary search tree

#include<iostream>

using namespace std;
struct node
{
    node *left;
    int data;
    node *right;
};
node *root;
void createTree(int no)
{
    node *t,*r;
    if(root==NULL)
    {
       root=new node;
       root->data=no;
       root->left=NULL;
       root->right=NULL;
    }
    else{

        t=new node;
        t->data=no;
        t->left=NULL;
        t->right=NULL;

        r=root;
        while(r!=NULL)
        {
            if(no>r->data)
            {
                if(r->right==NULL)
                {
                    r->right=t;
                    break;
                }
                else{

                    r=r->right;
                }
            }
            else{

                if(r->left==NULL)
                {
                    r->left=t;
                    break;
                }
                else{

                    r=r->left;
                }
            }
        }

    }
}
void inorder(node *t)
{
    if(t!=NULL)
    {
        inorder(t->left);
        cout<<t->data<<" ";
        inorder(t->right);
    }
}
void preorder(node *t)
{
    if(t!=NULL)
    {
        cout<<t->data<<" ";
        preorder(t->left);
        preorder(t->right);

    }
}
void postorder(node *t)
{
    if(t!=NULL)
    {
        postorder(t->left);
        postorder(t->right);
        cout<<t->data<<" ";
    }
}
int main()
{

    createTree(10);
    createTree(30);
    createTree(25);
    createTree(7);
    createTree(8);
    createTree(4);
    createTree(14);
    createTree(6);
    
    inorder(root);
    cout<<endl<<endl<<endl;

    preorder(root);
    cout<<endl<<endl<<endl;

    postorder(root);
    cout<<endl<<endl<<endl;

}

4 6 7 8 10 14 25 30 


10 7 4 6 8 30 25 14 


6 4 8 7 14 25 30 10 
