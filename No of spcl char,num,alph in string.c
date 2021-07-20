#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    printf("Enter the String: ");
    scanf("%[^\n]s",a);
    int len=strlen(a);
    int alph=0,num=0,spcl=0;
    for(int i=0;i<len;i++)
    {
           if(a[i]>='a' && a[i]<='z')
           alph++;
           else if(a[i]>='A' && a[i]<='Z')
           alph++;
           else if(a[i]>='0' && a[i]<='9')
           num++;
           else if(a[i]>=32 && a[i]<=47)
           spcl++;
           else if(a[i]>=58 && a[i]<=64)
           spcl++;
           else if(a[i]>=91 && a[i]<=96)
           spcl++;
           else if(a[i]>=123 && a[i]<=126)
           spcl++;
    }
    printf("Alphabets:%d\nNumbers:%d\nSpecial Character:%d",alph,num,spcl);
}