#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    printf("Enter the string: ");
    scanf("%[^\n]s",a);
    int len=strlen(a);
    for(int i=0;i<len;i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
        a[i]=a[i]-32;
        }
        else if(a[i]>='A' && a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
    }
    printf("%s",a);
}