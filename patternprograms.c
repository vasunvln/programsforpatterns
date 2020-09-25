//printing a pattern
#include <stdio.h>
int main()
{
    int i,j,k,n;
    printf("enter rows");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
          printf("1");  
        }
        printf("\n");
    }

}
