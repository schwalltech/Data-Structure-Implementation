#include<iostream>

using namespace std;

void merge_sort(int a[],int,int);
void merge(int a[],int,int,int);
int main()
{
    int a[]={9,8,7,6,5,4,3,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"before sorting\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    merge_sort(a,0,n-1);
    cout<<"after sorting\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
void merge_sort(int *a,int f,int l)
{
    int m;
    if(f<l)
    {
        m=(f+l)/2;
        merge_sort(a,f,m);
        merge_sort(a,m+1,l);
        merge(a,f,m,l);
    }
}
void merge(int a[],int f,int m,int l)
{
    int i,j,k;
    int b[100];
    i=f;
    j=m+1;
    k=f;

    while(i<=m && j<=l)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;k++;
        }
        else{
            b[k]=a[j];
            j++;k++;
        }
    }
    while(i<=m )
    {
        b[k]=a[i];
        i++;k++;
    }
    while(j<=l )
    {
        b[k]=a[j];
        j++;k++;
    }
    for(int i=f;i<=l;i++)
    {
        a[i]=b[i];
    }
}
