#include<stdio.h>
int main()
{
    int n;
    int pro = 1, sum = 0;
    scanf("%d",&n);
    while(n > 0)
    {
        pro *= n%10;
        sum += n%10;
        n = (int)n/10;
    }
    printf("%d",pro-sum);
    return 0;
}