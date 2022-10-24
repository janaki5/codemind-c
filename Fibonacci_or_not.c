#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0, b=1;
    if(n == 0 || n == 1)
        printf("True");
    else
    {
        while(true)
        {
            int c = a+b;
            if(c == n)
            {
                printf("True");
                break;
            }
            if(n > b && n < c)
            {
                printf("False");
                break;
            }
            a = b;
            b = c;
        }
    }
    return 0;
}