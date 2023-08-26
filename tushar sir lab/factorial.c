#include<stdio.h>
int fact(int n)
{
    if(n==1)
    return;
    return n*fact(n-1);

}
int main()
{
int s=fact(5);
printf("%d",s);
}