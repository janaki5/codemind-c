#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int pro=1, sum=0;
    while(n > 0)
    {
        pro *= n%10;
        sum += n%10;
        n /= 10;
    }
    if(sum == pro)
        printf("Spy Number");
    else
        printf("Not Spy Number");
    return 0;
}