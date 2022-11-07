#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int p,q;
    if(a>b)
    {
        p = a;
        q = b;
    }
    else
    {
        p = b;
        q = a;
    }
    int i = p;
    while(true)
    {
        if(i%a == 0 && i%b == 0)
        {
            printf("%d",i);
            break;
        }
        i += p;
    }
    return 0;
}