#include<stdio.h>
#include<string.h>
int main()
{
 char a[20];
    int l, i;
    gets(a);
    l = strlen(a);
    int count=0;
    for (int i = 0; i < l / 2; i++)
    {
        if (a[i] != a[l - 1 - i])
        {
            
            count++;
            break;
        }
    }
    if (count==0)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");}
}
