#include<stdio.h>
void main()
{
    int i=0,n;
    printf("enter the number");
    scanf("%d",&n);
    while(i<10)
    {
        printf("%d*%d=%d\n",n,i,n*i);
        i++;
    }
}
