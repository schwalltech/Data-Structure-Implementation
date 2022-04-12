#include<iostream>

using namespace std;

void bubble_sort(int[],int);
int main()
{
    int a[]={8,3,4,9,2};
    int n=sizeof(a)/sizeof(a[0]);

    bubble_sort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
void bubble_sort(int a[],int n)
{
    int temp;
    for(int i=0;i<=n-2;i++)
    {
        for(int j=0;j<=n-2-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

}
