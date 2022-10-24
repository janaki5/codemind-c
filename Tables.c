#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=1; i<=b; i++)
    {
        if(i % 2 != 0)
            printf("%d x %d = %d
",a,i,(a*i));
    }
    return 0;
}