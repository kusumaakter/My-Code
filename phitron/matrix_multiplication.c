#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100],m,n,p,q,i,j,k,sum;

    scanf("%d%d",&m,&n);
  
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
   
    scanf("%d%d",&p,&q);

    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("enter 1st matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("enter 2nd matrix:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    if(n!=p)
    {
        printf("can not multiply");
    }
    else
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                sum=0;
                for(k=0;k<m;k++)
                {
                    sum=sum+(a[i][k]*b[k][j]);
                }
                c[i][j]=sum;

            }
        }
        printf("multiplication:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }

    }

}
