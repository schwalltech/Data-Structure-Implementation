// bianry search tree

#include<iostream>

using namespace std;

void binary_serach(int[],int,int,int);
int main()
{
    int a[]={5,7,4,2,8,1};
    int no,temp;
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"enter number to be search\n";
    cin>>no;
    for(int i=0;i<=n-2;i++)
    {
        for(int j=1+i;j<=n-1;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    binary_serach(a,0,n,no);
    
}
void binary_serach(int a[],int f,int l,int no)
{
    int flag=0;
   while(f<=l)
   {
       int m=(f+l)/2;
       if(a[m]==no)
       {
           cout<<"number found\n";
           flag=1;
           break;
       }
       else if(no<a[m])
       {
           l=m-1;
       } 
       else if(no>a[m])
       {
           f=m+1;
       } 
   }
   if(flag!=1)
   {
       cout<<"number not found\n";
   }
   
}
