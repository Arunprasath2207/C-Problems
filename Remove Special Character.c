#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int j=0;
    printf("Enter the string with special characters: ");
    scanf("%s",a);
    int len=strlen(a);
    for(int i=0;i<len;i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            a[j++]=a[i];
        }
    }
    for(int k=0;k<j;k++)
    printf("%c",a[k]);
}