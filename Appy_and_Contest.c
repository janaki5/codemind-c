#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int j=0; j<a; j++)
    {
    int n,a1,a2,k;
    scanf("%d%d%d%d",&n,&a1,&a2,&k);
    int c1,c2,c;
    c1 = n/a1;
    c2 = n/a2;
    c = n/(a1*a2);
    if(c1+c2-c >= k)
        printf("Win
");
    else
        printf("Lose
");
    }
    return 0;
}