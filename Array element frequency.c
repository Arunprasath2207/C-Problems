#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int flag=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
       for(int j=i+1;j<n;j++)
       {
           if(a[i]==a[j])
           flag++;
       }
    }
    if(flag==0)
    printf("flase");
    else
    printf("true");
}