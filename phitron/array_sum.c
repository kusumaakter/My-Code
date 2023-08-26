#include<stdio.h>
int main()
{   
    int r,c,i,j;
    int a[r][c];
    int b[r][c];
    printf("enter row &col:");
    scanf("%d %d",&r,&c);
   printf("enter 1st matrix:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[r][c]);
        }
    }
    printf("enter 2nd matrix:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[r][c]);
        }
    }


    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        printf("sum=%d",a[r][c]+b[r][c]);
        }
        printf("\n");
    }
}