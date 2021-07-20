#include<stdio.h>
int main()
{
    int r,c;
    int sum=0;
    printf("Enter the number of rows and column");
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The given matrix");
    for(int i=0;i<r;i++)
    {
        printf("\n");
        for(int j=0;j<c;j++)
        {
            printf("%d   ",a[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        if(i==0 || i==r-1)
        {
            for(int j=0;j<c;j++)
            {
                sum=sum+a[i][j];
            }
        }
        else
        {
            sum=sum+a[i][c-i-1];
        }
    }
    printf("\nSum of the Zig Zag of the given Matrix: %d",sum);
}