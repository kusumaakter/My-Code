#include<stdio.h>
int fact(int n)
{   
    if(n==1)
    return;
    return n*fact(n-1);
    
}
int main()
{  
     int n;
    scanf("%d",&n);
int s=fact(n);
printf("%d",s);
}