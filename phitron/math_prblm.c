#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,len;
    char s[100];

    gets(s);
    len=strlen(s);
    for(i=0;i<len;i=+2)
    {
        for(j=0;j<len-1;j=+2)
        {if(s[j]!='+')
        {
            if(s[j]>s[j+2]);
            {
                char temp=s[j];
                s[j]=s[j+2];
                s[j+2]=temp;
            }
        }
    }}

    printf("%c",s);
}
