#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n,sum = 0;
    scanf("%d",&n);
    int temp = n;
    int i = (int)log10(n)+1;
    while(temp > 0)
    {
        sum += pow((temp%10),i);
        temp = (int)temp/10;
        i--;
    }
    if(sum == n)
        printf("True");
    else
        printf("False");
    return 0;
}