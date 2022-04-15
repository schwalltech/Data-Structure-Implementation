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
