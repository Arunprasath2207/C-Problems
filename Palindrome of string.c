#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int flag=0;
    scanf("%s",s);
    int len;
    len = strlen(s);
    for(int i=0;i<len;i++)
    {
        if(s[i]==s[len-1-i])
        {
            flag++;
        }
    }
    if(flag == 0)
    printf("Not");
    else
    printf("YEs");

}