#include<stdio.h>
int main()
{
    int n,i,j,k,tot;
    printf("Enter the number: ");
    scanf("%d",&n);
    tot=n+(n-1);
    k=n;
    for(i=0;i<tot;i++)
    {
        for(j=0;j<tot;j++)
        {
            if(i<n-1)
            {
                if(i==0)
                {
                    printf("%d",k);
                }
                else if(i>=1)
                {
                    if(j<i)
                    {
                        printf("%d",k-j);
                    }
                    else if(j>=i && j<tot-i)
                    {
                        printf("%d",k-i);
                    }
                    else
                    {
                        printf("%d",(j-k+1)+1);
                    }
                }
            }
            if(i==n-1)
            {
                if(j<=i)
                {
                    printf("%d",k-j);
                }
                else
                {
                    printf("%d",(j-k+1)+1);
                }
            }
            if(i>=n)
            {
                int x=tot-i-1;
                if(i==tot-1)
                {
                    printf("%d",k);
                }
                else if(j<x)
               {
                    printf("%d",k-j);
                }
                else if(j>=x && j<tot-x)
                {
                    printf("%d",k-x);
                }
                else
                {
                    printf("%d",(j-k+1)+1);
                }
            }
        }
        printf("\n");
    }
}