#include<stdio.h>
int main()
{
    //BITWISE OR
    int a,b;
    scanf("%d%d",&a,&b);
    printf("bitwise_or=%d\n",a|b);
    printf("bitwise_and=%d\n",a&b);
    printf("bitwise_x-or=%d\n",a^b);
    printf("bitwise_leftshift=%d\n",a<<2);
    printf("bitwise_rightshift=%d\n",a>>2);
}