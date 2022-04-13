#include<iostream>

using namespace std;

void search(int[],int,int);
int main()
{
    int a[]={5,7,4,2,8,1};
    int no;
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"enter number to be search\n";
    cin>>no;
    search(a,n,no);
    return 0;
}
void search(int a[],int n,int no)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==no)
        {
            break;
        }

    }
    if(i==n)
    {
        cout<<"number not found\n";
    }
    else
    {
        cout<<"number found\n";
    }
}
