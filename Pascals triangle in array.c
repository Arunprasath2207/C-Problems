#include<stdio.h>
int main()
{
    int n;
    int l;
    int k;
    int i;
    printf("Enter the number of input");
    scanf("%d",&n);
    int arr[n][n];
    for(int line=0;line<n;line++)
    {
        for(int i=0;i<=line;i++)
        {
            if(line==i || i==0)
            arr[line][i]=1;
            else
            arr[line][i]=arr[line-1][i-1]+arr[line-1][i];
        }
    }
    printf("{");
    for(l=0;l<n;l++)
    {
        printf("[");
        for(k=0;k<=l;k++)
        {
            if(k == l)
         printf("%d",arr[l][k]);
         else
         printf("%d,",arr[l][k]);
        }
        printf("]");
    }
    printf("}");
}