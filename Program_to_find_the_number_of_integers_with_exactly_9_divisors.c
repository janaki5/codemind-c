#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int d = 0;
    for(int i=10; i<=num; i++)
    {
        int c = 0;
        for(int j=1; j<=i; j++)
        {
            if(i%j == 0)
                c++;
        }
        if(c == 9)
        {
            printf("%d",i);
            printf(" ");
            d++;
        }
    }
    printf("
");
    printf("Total=%d",d);
    return 0;
}