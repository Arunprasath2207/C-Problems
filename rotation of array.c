#include<stdio.h>
int main()
{
    int i,n;
    int temp;
    int count;
    printf("Enter the n and elements:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number of rotation");
    scanf("%d",&count);
    for(i=0;i<count;i++)
    {
        temp=a[n-1];
        for(int k=n-1;k>0;k--)
        {
            a[k]=a[k-1];
        }
        a[0]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}