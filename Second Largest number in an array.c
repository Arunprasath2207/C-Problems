#include<stdio.h>
int main()
{
    int n;
    int a[100];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]<a[j+1])
            {
                int temp;
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    int ans=-1;
    for(int i=0;i<n;i++)
    {
       if(a[i]!=a[i+1])
       {
           ans=a[i+1];
           break;
       }
    }
    printf("The second largest is %d",ans);
}