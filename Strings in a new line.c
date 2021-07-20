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
        if(a[i]==' ')
        {
            a[i]='\n';
        }
    }
    printf("%s",a);
    
}