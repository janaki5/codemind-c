#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a; i<=b; i++)
    {
        int temp = i;
        int c = 0;
        while(temp > 0)
        {
            int p = temp%10;
            if(p == 0)
            {
                c = 1;
            }
            else
            {
                if(i%p != 0)
                    c = 1;
            }
            temp = temp/10;
        }
            if(c == 0)
            {
                printf("%d",i);
                printf(" ");
            }
    }
    return 0;
}