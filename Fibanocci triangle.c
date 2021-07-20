#include<stdio.h>
int main()
{
    int i,j;
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int a=0;
    int b=1;
    int c;
    for(i=1;i<=n;i++)
    {
        a=0;
        b=1;
        printf("%d ",b);
        for(int j=1;j<i;j++)
        {
            c=a+b;
            printf(" %d ",c);
            a=b;
            b=c;
        }
        printf("\n");
    }
}