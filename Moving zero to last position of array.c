#include<stdio.h>
int main()
{
    int i,n;
    int a[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            a[j++]=a[i];
        }
    }
    while(j<n)
    {
        a[j++]=0;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}