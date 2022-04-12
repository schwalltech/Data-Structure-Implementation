#include<iostream>

using namespace std;

void insertion_sort(int[],int);
int main()
{
    int a[]={9,8,7,6,5,4,3,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    insertion_sort(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}

void insertion_sort(int a[],int n)
{
    int temp,k;
    for(int i=0;i<=n-2;i++)
    {
        for(int j=1+i;j<=n-1;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                for(k=j;k>i;k--)
                {
                    a[k]=a[k-1];
                }
                a[k+1]=temp;
            }
        }
    }
}
