#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int len;
    printf("Enter the strings: ");
    scanf("%[^\n]s",a);
    len=strlen(a);
    for(int i=len-1;i>=0;i--)
    {
       if(a[i]==' ')
       {
       a[i]='\0';
       printf("%s ",&(a[i])+1);
       }
    }
    printf(" %s",a);
 }