#include<stdio.h>
int main()
{
    int i,j,x=0,p,q;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            
            scanf("%d",&x);
            if(x==1)
            {
                 p=abs(i-3);
                q=abs(j-3);
                   printf("%d ",p+q);
            }
        }
      
     
    }
 


}