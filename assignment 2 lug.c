#include<stdio.h>
int sum(int);
int main()
{
    int n,i,sum=0;
    printf("enter the value of n");
    scanf("%d",&n);

    for(i=1;i<=n;i+=2)
    {
        sum +=i;
    }
    printf("sum of odd numbers=%d",sum);
    return 0;
}
