#include<iostream>

using namespace std;

void quick_sort(int[],int,int);
int main()
{
    int a[]={9,8,7,6,5,4,3,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"before sorting\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
   quick_sort(a,0,n-1);
    cout<<"after sorting\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
void quick_sort(int a[],int f,int l)
{
    int i,j,p,temp;
    
    if(f<l)
    {
        i=f+1;
        j=l;
        p=a[f];

        while (i<=j)
        {
            while(p>a[i])
            {
                i++;
            }
            while(p<a[j])
            {
                j--;
            }
            if(i<=j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        a[f]=a[j];
        a[j]=p;
        quick_sort(a,f,j-1);
        quick_sort(a,j+1,l);
        

    }
}
