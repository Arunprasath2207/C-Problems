#include<stdio.h>
int main()
{
    int a[100];
    int b[100];
    int c[100];
    int n;
    int k=0;
    printf("Enter the size of the two arrays");
    scanf("%d",&n);
    printf("Enter the elements of the firts array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of the second array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    int tot=n*2;
    for(int i=0;i<n;i++)
    {
        c[k++]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        c[k++]=b[i];
    }
    for(int i=0;i<tot;i++)
    {
        for(int j=0;j<tot-1;j++)
        {
            if(c[j]<=c[j+1])
            {
                int temp;
                temp=c[j+1];
                c[j+1]=c[j];
                c[j]=temp;
            }
        }
    }
    for(int i=0;i<tot;i++)
    {
        printf("%d",c[i]);
    }
}