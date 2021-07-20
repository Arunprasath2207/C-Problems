#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&r,&c);
    int a[r][c];
    int b[c][r];
    printf("Enter the elements of the array: ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The original matrix:");
    for(int i=0;i<r;i++)
    {
        printf("\n");
        for(int j=0;j<c;j++)
        {
            printf("%d  ",a[i][j]);
        }
    }
    printf("\nThe Transporse of the given matrix");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    for(int i=0;i<c;i++)
    {
        printf("\n");
        for(int j=0;j<r;j++)
        {
            printf("%d ",b[i][j]);
        }
    }
   
}