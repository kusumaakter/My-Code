#include<stdio.h>
void fun(int i)
{
    if(i==0)
    return;
    printf("%d\n",s);
    fun(i-1);
}
int main()
{
   int s= fun(5);
    return 0;
}