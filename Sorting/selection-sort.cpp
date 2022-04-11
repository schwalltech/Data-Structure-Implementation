//selection sort

#include<iostream>

using namespace std;

void selection_sort(int[],int);
int main()
{
    int n;
    cout<<"how many elements you want to enter\n";
    cin>>n;

    int *a=new int[n];
    cout<<"enter "<<n<<" numbers\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"before sorting\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    selection_sort(a,n);
    cout<<"after sorting\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
void selection_sort(int a[],int n)
{
    int temp;
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
}
