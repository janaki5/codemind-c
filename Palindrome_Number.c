#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int k,sum=0,r;
        int temp;
        scanf("%d",&k);
        temp=k;
        while(k>0)
        {
            r=k%10;
            sum=sum*10+r;
            k=k/10;
        }
    
        k=temp;
        if(k==sum)
        printf("True
");
        else
        printf("False
");
    }
}