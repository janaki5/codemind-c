#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int temp = num*num;
    int sum = 0;
    while(temp > 0)
    {
        sum += temp%10;
        temp /= 10;
    }
    if(sum == num)
        printf("Neon Number");
    else
        printf("Not Neon Number");
    return 0;
}