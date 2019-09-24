#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    int var=num,ctr=0,sum=0,digit;
    while(var!=0)
    {
        var/=10;
        ctr++;
    }
    var=num;
    while(var!=0)
    {
        digit=var%10;
        var/=10;
        sum+=pow(digit,ctr);
    }
    printf("%d\n",sum);
    if(sum==num)
        printf("Armstrong number");
    else
        printf("Not an armstrong number");
}
