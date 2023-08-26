#include<stdio.h>
#include<string.h>
char a[100],b[100];
scanf("%s%s",a,b);
int i=0;
while(1)
{
    if(a[i]=='\0'&&b[i]=='\0')
    {   
        printf("0");
        break;
    }
    else if(a[i]=='\0')
    {
        printf("-1");
        break;
    }
    else if(b[i]=='\0')
    {
        printf("1");
    }
}