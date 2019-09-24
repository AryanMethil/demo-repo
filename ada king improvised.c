#include<stdio.h>
int main()
{
    int T,i,r,c,k,m,n;
    printf("Enter number of test cases:");
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        int a[8][8];
        printf("enter row column and moves:");
        scanf("%d %d %d",&r,&c,&k);

        for(m=r-1-k;m<=r-1+k;m++)
        {
            for(n=c-1-k;n<=c-1+k;n++)
            {
                if(m>=0&&n>=0)
                    a[m][n]=1;
            }
        }
        int ctr=0;
        for(m=0;m<8;m++)
        {
            for(n=0;n<8;n++)
            {
                if(a[m][n]==1)
                    ctr++;
            }
        }
        printf("%d",ctr);
    }
}
