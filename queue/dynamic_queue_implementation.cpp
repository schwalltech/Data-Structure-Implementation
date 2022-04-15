#include<iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};
node *f,*r;

void init()
{
    f=NULL;
    r=NULL;
}

void insert(int no)
{
    node *t;
    if(r==NULL)
    {
        r=new node;
        r->data=no;
        r->next=NULL;
        f=r;
    }
    else{
        t=new node;
        t->data=no;
        t->next=NULL;
        r->next=t;
        r=t;
    }
}
int del()
{
    node *t;
    int c;
    if(f==NULL)
    {
        cout<<"queue is empty\n";
        return 0;
    }
    else if(f->next==NULL) 
    {
        c=f->data;
        delete f;
        f=r=NULL;
        return c;
    }
    else{

        t=f;
        f=f->next;
        c=t->data;
        delete t;
        return c;
    }
}
void display()
{
    node *t;
    t=f;
    while(t!=NULL)
    {
        cout<<t->data<<"->";
        t=t->next;
    }
    cout<<endl;
}
int main()
{
    int no,ch;
    init();

    while (true)
    {
        cout<<"Case 1: insert\n";
        cout<<"Case 2: delete\n";
        cout<<"Case 3: display\n";
        cout<<"Case 4: exit\n\n";
        cout<<"enter your choice\n";
        cin>>ch;

        switch (ch)
        {
            case 1:
                cout<<"enter no\n";
                cin>>no;
                insert(no);
                break;
            case 2:
                no=del();
                cout<<"you deleted "<<no<<endl;
                break;

            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;            
            
            default:
                cout<<"Please enter valid choice\n";
        }
    }

    return 0;
}
