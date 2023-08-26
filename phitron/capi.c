#include<stdio.h>
int main()
{
     long long int a,b;
    scanf("%lld%lld",&a,&b);
    if(a%b==0||b%a==0)
    {
        printf("Multiples");
    }

    else
    {
        printf("No Multiples");

    }

}
