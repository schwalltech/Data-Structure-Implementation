#include<iostream>
#define Max 3

using namespace std;

struct queue
{
    int a[Max];
    int f;
    int r;
};
void init(queue &p)
{
    p.f=-1;
    p.r=-1;
}
void insert(queue &p,int no)
{
    if(p.r==Max-1)
    {
        cout<<"queue is full\n";
    }
    else {

        p.r++;
        p.a[p.r]=no;

        if(p.f==-1)
        {
            p.f=0;
        }
        
    }
    
}

 int del(queue &p)
 {
     int temp;
     if(p.f==-1)
     {
         cout<<"queue is empty\n";
         return 0;
     }
     else
     {
         temp=p.a[p.f];
         p.a[p.f]=0;
         if(p.f==p.r)
         {
             p.f=-1;p.r=-1;
         }
         else
            p.f++;
        
        return temp;
     }

 }

void display(queue &p)
{
    for(int i=p.f;i<=p.r;i++)
    {
        cout<<p.a[i]<<" "<<endl;
    }
}
int main()
{
    int ch,no;
    queue s1;
    init(s1);

    while(true)
    {
       
        cout<<"case1: insert\n";
        cout<<"case2: delete\n";
        cout<<"case3: display\n";
        cout<<"case4: exit\n";
        cout<<"enter your choice\n";
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"enter no\n";
                cin>>no;
                insert(s1,no);
                break;
            case 2:
                no=del(s1);
                cout<<"you deleted "<<no<<endl;
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
