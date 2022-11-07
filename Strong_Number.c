#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int temp = num;
    int sum = 0;
    while(temp > 0)
    {
        int p = temp%10;
        int fact = 1;
        for(int i=1; i<=p; i++)
            fact *= i;
        sum += fact;
        temp /=10;
    }
    if(sum == num)
        printf("The number %d is a strong number",num);
    else
        printf("The number %d is not a strong number",num);
    return 0;
}