#include<stdio.h>
int main()
{
    int n,r,sum=0;
    scanf("%d",&n);
    while(n)
    {
       r=n%10;
       sum=sum*10+r;
       n=n/10;
    }
    printf("%d",sum);
}