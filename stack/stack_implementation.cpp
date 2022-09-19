#include<iostream>
#define Max 3

using namespace std;

struct stack
{
    int a[Max];
    int top;
};

void init(stack &p)
{
    p.top=-1;

}
void push(stack &p,int no)
{
    if(p.top==Max-1)
    {
        cout<<"stack is overflow\n";
    }
    else{
        p.top++;
        p.a[p.top]=no;
    }
    
}
int pop(stack &p)
{
    int temp;
    if(p.top==-1)
    {   
        cout<<"stack is underflow\n";
        return 0;
    }
    else{

        temp=p.a[p.top];
        p.a[p.top]=0;
         p.top--;
         return temp;
    }

}
void display(stack &p)
{
    for(int i=0;i<=p.top;i++)
    {
        cout<<p.a[i]<<endl;
    }
}
int main()
{
    int ch,no;
    stack s1;
    init(s1);

    while(true)
    {
       
        cout<<"case1: push\n";
        cout<<"case2: pop\n";
        cout<<"case3: display\n";
        cout<<"case4: exit\n";
        cout<<"enter your choice\n";
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"enter no\n";
                cin>>no;
                push(s1,no);
                break;
            case 2:
                no=pop(s1);
                cout<<"you poped "<<no<<endl;
                break;
            case 3:
                display(s1);
                break;   
            case 4:
                exit(0);
        }
    }
    return 0;
}

..
