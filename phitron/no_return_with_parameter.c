#include<stdio.h>
void sum(int x,int y)
{
    int s=x+y;
    printf("%d\n",s);
}
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    sum(x,y);

}