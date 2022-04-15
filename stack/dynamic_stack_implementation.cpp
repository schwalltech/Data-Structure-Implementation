#include<iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};
void init(node **top)
{
    *top=NULL;
}

void push(node **top,int no)
{
    node *t;
    if(*top==NULL)
    {
        *top=new node;
        (*top)->data=no;
        (*top)->next=NULL;
    }
    else{
        t=new node;
        t->data=no;
        t->next=*top;
        *top=t;
    }
}
int pop(node **top)
{
    node *t;
    int c;
    if(*top==NULL)
    {
        cout<<"stack is empty\n";
        return 0;
    }
    else{

        t=*top;
        *top=(*top)->next;
        c=t->data;
        delete t;
        return c;

    }
}
void display(node **top)
{
    node *t;
    t=*top;
    while (t!=NULL)
    {
        cout<<t->data<<"->";
        t=t->next;
    }
    cout<<endl;
    
}
int main()
{
    node *top;
    int no,ch;
    init(&top);

    while (true)
    {
        cout<<"Case 1: push\n";
        cout<<"Case 2: pop\n";
        cout<<"Case 3: display\n";
        cout<<"Case 4: exit\n\n";
        cout<<"enter your choice\n";
        cin>>ch;

        switch (ch)
        {
            case 1:
                cout<<"enter no\n";
                cin>>no;
                push(&top,no);
                break;
            case 2:
                no=pop(&top);
                cout<<"you deleted "<<no<<endl;
                break;

            case 3:
                display(&top);
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
