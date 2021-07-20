#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    char b[100];
    char c[100];
    int i,j=0;
    printf("Enter the string: ");
    gets(a);
    gets(b);
    int len1=strlen(a);
    int len2=strlen(b);
    for(i=0;i<len1;i++)
    {
        c[j++]=a[i];
    }
    c[j]=' ';
    j=j+1;
    for(int k=0;k<len2;k++)
    {
        c[j++]=b[k];
    }
    printf("%s",c);
    
}