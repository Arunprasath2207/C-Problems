#include<stdio.h>
int main()
{
    int n;
    int arr[100];
    int sum;
    int sumget;
    printf("Enter the size of the array");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sum=0;
    sumget=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum>sumget)
        sumget=sum;
        else if(sum<0)
        sum=0;
    }
    printf("%d",sumget);
}