#include<iostream>

using namespace std;
struct node
{
    int data;
    node *next;
    
};
void createList(node **root,int no)
{   
    node *temp,*r;
    if(*root==NULL)
    {
        *root=new node;
        (*root)->data=no;
        (*root)->next=NULL;

    }
    else{

        temp=new node;
        temp->data=no;
        temp->next=NULL;
        r=*root;
        while(r->next!=NULL)
        {
            r=r->next;
        }
        r->next=temp;
    }
}
void addFirst(node **root,int no)
{
    node *temp;
    if(*root==NULL)
    {
        cout<<"Invalid operations\nFirst you have to create LinkedList then you can add first node in that\n";
    }
    else{

        temp=new node;
        temp->data=no;
        temp->next=*root;
        *root=temp;
    }
}
void addLast(node *root,int no)
{
    node *temp;
    if(root==NULL)
    {
        cout<<"Invalid Operation\nLinked List is empty you cannot add last node first you have to create list then you can add last node\n";
    }
    else{

        temp=new node;
        temp->data=no;
        temp->next=NULL;

        while(root->next!=NULL)
        {
            root=root->next;
        }
        root->next=temp;
    }
}
int count(node *root)
{
    int counter=0;
    while(root!=NULL)
    {
        counter++;
        root=root->next;
        
    }
    return counter;
}
void insertAtPossition(node *root,int no,int pos)
{
    int len=count(root);
    if(pos>0 && pos<=len)
    {
        node *temp;
        temp=new node;
        temp->data=no;
        temp->next=NULL;
        for(int i=1;i<pos;i++)
        {
            root=root->next;
        }
        temp->next=root->next;
        root->next=temp;


    }
    else{

        cout<<"Out of range\n";
    }
} 
void display(node *root)
{
    if(root==NULL)
    {
        cout<<"Linked List is empty\n";
    }
    else{

        while(root!=NULL)
        {
            cout<<root->data<<"->";
            root=root->next;
        }
        cout<<"\n";
    }
}
void delFirst(node **root)
{
    node *temp;
    if(*root==NULL)
    {
        cout<<"Linked List is empty\n";
    }
    else{
        temp=*root;
        *root=(*root)->next;
        delete temp;
    }
}
void delLast(node **root)
{
    node *temp,*r;
    if(*root==NULL)
    {
        cout<<"LinkedList is empty";
    }
    else if((*root)->next==NULL)
    {
        temp=*root;
        (*root)=(*root)->next;
        delete temp;
    }
    else{

        temp=*root;

        while(temp->next!=NULL)
        {
           r=temp;
           temp=temp->next;
        }
        r->next=NULL;
        delete temp;
        
    }
}
void delByPossition(node **root,int pos)
{
    node *t,*r;
    if(*root==NULL)
    {
        cout<<"Linked List is empty\n";
    }
    else if(pos==1){
        t=*root;
        *root=(*root)->next;
        delete t;
    }
    else{

        int len=count(*root);
        if(pos>0 && pos<=len)
        {
            t=*root;
            for(int i=1;i<pos;i++)
            {
                r=t;
                t=t->next;
            }
            r->next=t->next;
            delete t;
        }
        else{
            cout<<"Out of range\n";
        }
    }
}
void reverse(node **root)
{
    node *r,*t,*s;
    r=NULL;
    t=*root;
    while (t!=NULL)
    {
        s=r;
        r=t;
        t=t->next;
        r->next=s;
    }
    *root=r;
    
}
void sort(node *root)
{
    node *p,*q;
    int temp;
    p=root;

    while(p->next!=NULL)
    {
        q=p->next;
        while (q!=NULL)
        {
            if(p->data>q->data)
            {
                temp=p->data;
                p->data=q->data;
                q->data=temp;
            }
            q=q->next;
        }
        p=p->next;
    }
}
int main()
{   
    node *head=NULL;
    int ch,no,pos;
    while(true)
    {
        
        cout<<"Case 1: Create Linked List\n";
        cout<<"Case 2: Add First Node\n";
        cout<<"Case 3: Add Last Node\n";
        cout<<"Case 4: Add Node At Posiition\n";
        cout<<"Case 5: Display Linked List\n";
        cout<<"Case 6: Delete first node\n";
        cout<<"Case 7: Delete last node\n";
        cout<<"Case 8: Delete By Possition\n";
        cout<<"Case 9: Reverse Linked List\n";
        cout<<"Case 10: Sort Linked List\n";
        cout<<"Case 11: Exit\n";
        cout<<"Enter your choice\n";
        cin>>ch;

        switch (ch)
        {
            case 1:
                cout<<"enter no\n";
                cin>>no;
                createList(&head,no);
                break;
            case 2:
                cout<<"enter no\n";
                cin>>no;
                addFirst(&head,no);
                break;
            case 3:
                cout<<"enter no\n";
                cin>>no;
                addLast(head,no);
                break;        
            case 4:
                cout<<"enter no\n";
                cin>>no;
                cout<<"enter pos to add no\n";
                cin>>pos;
                insertAtPossition(head,no,pos);
                break;
            case 5:
                display(head);
                break;    

            case 6:
                delFirst(&head);
                break;    
            case 7:
                delLast(&head);
                break;    
            case 8:
                cout<<"enter pos\n";
                cin>>no;
                delByPossition(&head,no);
                break;    
            case 9:
                reverse(&head);
                break;    
            case 10:
               sort(head);
                break;    

            case 11:
                exit(0);
                break;    
            default:
                cout<<"Please enter valid choice\n";
                break;
            }
    }

    return 0;
}
